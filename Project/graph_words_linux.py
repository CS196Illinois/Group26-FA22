from pathlib import Path
from collections import OrderedDict
import os
import matplotlib.pyplot as plot

pathname = input("Insert filename (omit .txt) from 'presidential_debates': " )
keyPath = Path("keyto_linux_" + pathname + ".keeey")
path = Path()

#Checks and permanently stores path per device to a given file... This was very hard, please don't break it :)
#Also, I put the new .keeey extension I made into .gitignore, so that the keys really are device independent
if not (keyPath.is_file()):
    stop = False
    # print(os.getcwd())
    with open(keyPath, 'w') as file:
        while ("Data and Transcripts/presidential_debates" not in os.getcwd()):
            print(os.getcwd())
            for item in os.listdir(os.getcwd()):
                print(item)
                print(stop)
                if item == 'Data and Transcripts':
                    os.chdir('Data and Transcripts/presidential_debates')
                    stop = True
                    break
                if item == 'presidential_debates':
                    os.chdir('presidential_debates')
                    break
            if not stop:
                os.chdir('..')
        # print(os.getcwd())
        file.write(os.getcwd())
        path = Path(os.getcwd())
else:
    with open(keyPath, 'r') as file:
        keyAsList = file.readlines()
        # print(keyAsList)
        path = Path(keyAsList[0])
    
path = Path(str(path) + "/" + pathname + ".txt")

wordList = []
wordSummary = {}

removeList = ['`','~','!','@','#','$','%','^','&','*','(',')','{','}','[',']','|',';',':','.','/','?','<','>',',']

#Iterates through file to prepare for word separation
with open(path, encoding="utf8") as file:
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

#The plot will only run in python environments, like Jupyter, that can display it. If someone knows a way past this, please tell me (or add it)!
myplot = plot.bar(range(len(orderedWordSummary)), list(orderedWordSummary.values()))

