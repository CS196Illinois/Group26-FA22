from platform import system

from linux_previous_to_next_preprocessor import LinuxPreProcess
from windows_previous_to_next_preprocessor import WindowsPreProcess

if (system() != 'Windows'):
    preProcess = LinuxPreProcess()
    preProcess.runPreProcess("TrumpSpeeches")
    print(preProcess.serializeCurrentList("TrumpSpeeches", True))

if (system() == 'Windows'):
    preProcess = WindowsPreProcess()
    preProcess.runPreProcess("TrumpSpeeches")
    print(preProcess.serializeCurrentList("TrumpSpeeches", True))