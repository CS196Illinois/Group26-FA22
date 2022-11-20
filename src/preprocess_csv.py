from pathlib import Path
import os

class LinuxPreProcessCSV:
    def runPreProcess(self, filename):
        newLines = []
        removeList = ['`','~','!','@','#', '\"', '$','%','^','&','*','(',')','{','}','[',']','|',';',':','.','/','?','<','>']

        path = Path(filename + ".csv")
        with open(path, 'r') as file:
            lines = file.readlines()
            file.close()
        for line in lines:
            copiedLine = line            
            for character in removeList:
                copiedLine = copiedLine.replace(character, "")
            newLines.append(copiedLine)

        Path.unlink(path)
        
        with open(path, "w") as file:
            for line in newLines:
                file.write(line)
            file.close()

newOne = LinuxPreProcessCSV()
newOne.runPreProcess("trump")