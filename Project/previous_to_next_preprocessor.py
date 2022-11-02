from pathlib import Path
from collections import OrderedDict
import os
import LinkedList

targetFolder = input("Insert target folder name (must be in Data and Transcripts): ")
pathname = input("Insert filename (omit .txt) of any file in target folder: ")

keyPath = Path("keyto_linux_" + pathname + ".keeey")
path = Path()
tryCount = 0

#Checks and permanently stores path per device to a given file... This was very hard, please don't break it :)
#Also, I put the new .keeey extension I made into .gitignore, so that the keys really are device independent
if not (keyPath.is_file()):
    stop = False
    # print(os.getcwd())
    with open(keyPath, 'w') as file:
        while ("Data and Transcripts/" + targetFolder not in os.getcwd()):
            print(os.getcwd())
            for item in os.listdir(os.getcwd()):
                #print(item)
                #print(stop)
                if item == 'Data and Transcripts':
                    os.chdir('Data and Transcripts/' + targetFolder)
                    stop = True
                    break
                if item == targetFolder:
                    os.chdir(targetFolder)
                    break
            if not stop:
                os.chdir('..')
                if (tryCount > 20):
                    raise TimeoutError("Invalid Folder or Starting Directory")
                tryCount += 1
        # print(os.getcwd())
        file.write(os.getcwd())
        path = Path(os.getcwd())
else:
    with open(keyPath, 'r') as file:
        keyAsList = file.readlines()
        # print(keyAsList)
        path = Path(keyAsList[0])

os.chdir(path)
savePath = os.getcwd().removesuffix(pathname + ".txt")
print("LOOK: " + savePath)
for item in os.listdir(savePath):
    if (".keeey" in item or "word_list" in item or "parsed" in item):
        continue

    path = Path(savePath + "/" + item)

    wordList = []
    wordSummary = {}

    removeList = ['`','~','!','@','#', '\"', '$','%','^','&','*','(',')','{','}','[',']','|',';',':','.','/','?','<','>',',']

    #Iterates through file to prepare for word separation
    #print(path)
    allLines = []
    allPhrases = []
    with open(path, encoding="utf8") as file:
        print("Making Lines for : " + str(path))
        lines = file.readlines()
        for line in lines:
            for item in (line.replace('.', "SPLIT").replace('!', "SPLIT").replace('?', "?SPLIT").replace(';', "SPLIT").replace(':', "SPLIT")).split("SPLIT"):
                allLines.append(item)
        for line in allLines:
            editedLine = line.lower()
            for char in removeList:
                editedLine = editedLine.replace(char, '')
            allPhrases.append(editedLine)
            
    file.close()

    createPath = Path(savePath + (str(path).removeprefix(savePath)).removesuffix(".txt") + "_parsed.txt")

    if (createPath.exists() and "presidential_debates" not in str(createPath)):
        createPath.unlink()

    print("Making Parsed File for : " + str(path))
    if ("presidential_debates" not in str(createPath)):
        with open(Path(savePath + (str(path).removeprefix(savePath)).removesuffix(".txt") + "_parsed.txt"), 'w') as file:
            for item in allPhrases:
                file.write(item)
                file.write('\n')
            file.close()
    
    #print("Reading Parsed Files for Linking Process : " + str(path))
    linked = LinkedList.LinkedList()
    for i in range(len(allPhrases)):
        if (i == 0):
            continue
        linked.addToEnd(allPhrases[i])
        incrementBar = " " * (len(allPhrases) - 1 - i)
        percentageBar = (100 / (len(allPhrases) - 1)) * i
        print(f"\r{percentageBar}%", end=" ", flush=True)
    linked.getContext()

    