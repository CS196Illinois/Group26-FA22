from pathlib import Path
from collections import OrderedDict
import os
#import matplotlib.pyplot as plot

targetFolder = ("Insert target folder name (must be in Data and Transcripts): " )
pathname = input("Insert filename (omit .txt) of any file in target folder: " )

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
    if (".keeey" in item or "word_list" in item or not "parsed" in item):
        continue

    path = Path(savePath + "/" + item)

    wordList = []
    wordSummary = {}

    removeList = ['`','~','!','@','#','$','%','^','&','*','(',')','{','}','[',']','|',';',':','.','/','?','<','>',',']

    #Iterates through file to prepare for word separation
    #print(path)
    with open(path, encoding="utf8") as file:
        print("Making Dict for : " + str(path))
        lines = file.readlines()
        for line in lines:
            editedLine = line.lower()
            for char in removeList:
                editedLine = editedLine.replace(char, '')

            compliledList = editedLine.split(" ")
            for word in compliledList:
                wordList.append(word)
                # print(word)
                
        wordSet = set()
        
        for word in wordList:
            wordSet.add(word)
        
        for word in wordSet:
            count = 0
            for searchWord in wordList:
                if (word == searchWord):
                    count = count + 1
            
            wordSummary[word] = count
            
        # print(wordSummary)

    file.close()

    orderedWordSummary = OrderedDict(sorted(wordSummary.items(), key=lambda word: word[1]))
    # print(orderedWordSummary)
    createPath = Path(savePath + (str(path).removeprefix(savePath)).removesuffix(".txt") + "_word_list.txt")

    if (createPath.exists()):
        createPath.unlink()

    print("Making WordList File for : " + str(path))
    with open(Path(savePath + (str(path).removeprefix(savePath)).removesuffix(".txt") + "_word_list.txt"), 'w') as file:
        file.write(str(orderedWordSummary))
        file.close()