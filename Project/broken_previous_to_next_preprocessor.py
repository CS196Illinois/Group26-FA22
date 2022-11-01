from pathlib import Path
from collections import OrderedDict
import os
#import matplotlib.pyplot as plot

class Item():
    
    def __init__(self, value):
        self.value = value
        self.next = None
        self.prev = None
    
    def setNext(self, setNext):
        self.next = setNext

    def setPrev(self, setPrev):
        self.prev = setPrev
    
    def setValue(self, setValue):
        self.value = setValue

    def getNext(self):
        return self.next

    def getPrev(self):
        return self.prev

    def getValue(self):
        return self.value
        

class LinkedList:
    
    def __init__(self, starter: Item):
        self.starter = starter
        self.size = 0

    def getSize(self):
        return self.size

    def addToEnd(self, value):
        newLine = Item(value)
        if self.findEnd() == None:
            print("FAIL")
            return
        end = (self.findEnd())
        newLine.prev = end
        end.next = newLine
        newLine.next = None

    def findEnd(self):
        currentItem = self.starter
        while (currentItem.getNext() != None):
            currentItem = currentItem.getNext()
            print(currentItem == None)
     
    def getItem(self, value):
        currentItem = self.starter
        while currentItem != None:
            if currentItem.getValue() == value:
                return currentItem
            else:
                if currentItem.getNext() != None:
                    currentItem = currentItem.getNext()
                else:
                    raise Exception("Value not found in list!")
    
    def isInit(self):
        if self.starter == None:
            return False
        return True

    def getContext(self, value):

        try:
            self.getItem(value)
        except:
            return None

        if (self.getItem(value).prev is not None and self.getItem(value).next is not None):
            return [self.getItem(value).getPrev().getValue(), self.getItem(value).getValue(), self.getItem(value).getNext().getValue()]
        if (self.getItem(value).prev is not None and self.getItem(value).next is None):
            return [self.getItem(value).getPrev().getValue(), self.getItem(value).getValue(), "END"]
        if (self.getItem(value).prev is None and self.getItem(value).next is not None):
            return ["START", self.getItem(value).getValue(), self.getItem(value).getNext().getValue()]
        if (self.getItem(value).prev is None and self.getItem(value).next is None):
            return ["START", self.getItem(value).getValue(), "END"]

        
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
    linked = LinkedList(Item(allPhrases[0]))
    for i in range(len(allPhrases)):
        if (i == 0):
            continue
        linked.addToEnd(allPhrases[i])

    currentItem = linked.getItem(allPhrases[0])
    while (currentItem.getNext() != None):
        print(currentItem.getValueTru())
        currentItem = currentItem.getNext()