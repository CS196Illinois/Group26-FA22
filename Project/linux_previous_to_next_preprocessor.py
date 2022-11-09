from pathlib import Path
from collections import OrderedDict
import os
import LinkedList
import pickle

class LinuxPreProcess:
    
    def __init__(self):
        self.masterList: list[LinkedList.LinkedList] = []

    def resolveKeeey(self, targetFolder: str):
        keyPath = Path("keyto_linux_" + targetFolder + ".keeey")
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
        print(path)


    def runPreProcess(self, targetFolder: str):
        self.resolveKeeey(targetFolder)
        savePath = os.getcwd()
        #print("LOOK: " + savePath)
        for item in os.listdir(savePath):
            if (".keeey" in item or "word_list" in item or "parsed" in item or not ".txt" in item):
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
                #print("Making Lines for : " + str(path))
                lines = file.readlines()
                for line in lines:
                    for item in (line.replace('.', "SPLIT").replace('!', "SPLIT").replace('?', "?SPLIT").replace(';', "SPLIT").replace(':', "SPLIT").replace('\n', "SPLIT")).split("SPLIT"):
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

            #print("Making Parsed File for : " + str(path))
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
                percentageBar = (100 / (len(allPhrases) - 1)) * i
                print(f"\r{percentageBar}%", end=" done with parsing... " + str(path), flush=True)
            print()
            self.masterList.append(linked.getContext())
        

    def wipeListList(self):
        self.masterList = []

    def getIndexFromListList(self, index: int) -> list[list[str]]:
        return self.masterList[index]

    def getListList(self) -> list[list[list[str]]]:
        return self.masterList

    def serializeCurrentList(self, newFilename: str, overwriteExistingFiles: bool = False) -> bool:
        self.resolveKeeey(newFilename)
        try:

            sumFName: str = newFilename + ".pickle"
            sumFNamePath = Path(sumFName)

            if sumFNamePath.is_file() and overwriteExistingFiles == False:
                return False
            elif sumFNamePath.is_file() and overwriteExistingFiles == True:
                Path.unlink(sumFNamePath)

            with open(sumFNamePath, 'wb') as file:
                pickle.dump(self.masterList, file)
            file.close()
            return True

        except:
            return False

    def deserializeListToMaster(self, targetFilename, doNotOverwrite: bool = False) -> bool:
        self.resolveKeeey(targetFilename)
        try:
            sumFName: str = targetFilename + ".pickle"
            sumFNamePath = Path(sumFName)
            masterIsEmpty = self.masterList == None or len(self.masterList) == 0

            if sumFNamePath.is_file() and doNotOverwrite == True:
                if not masterIsEmpty:
                    return False
            elif sumFNamePath.is_file() and doNotOverwrite == False:
                with open(sumFNamePath, 'rb') as file:
                    self.masterList = pickle.load(file)
                file.close()
                return True
            return False

        except:
            return False
                
                



        

    