from linux_previous_to_next_preprocessor import LinuxPreProcess
#from windows_previous_to_next_preprocessor import WindowsPreProcess

preProcess = LinuxPreProcess()
preProcess.runPreProcess("TrumpSpeeches")

print(preProcess.serializeCurrentList("TrumpSpeeches", True))