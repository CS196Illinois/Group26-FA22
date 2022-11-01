class Item:
  def __init__(self, value):
    self.value = value
    self.next = None
    self.index = 0
    self.prev = None
  
  def getValue(self):
    if (self.value != None):
      return self.value
    return None

class LinkedList:
  def __init__(self):
    self.starter = None
    self.listForm = []

  def addToEnd(self, setValue: int):
    newItem = Item(setValue)
    if(self.starter == None):
      self.starter = newItem
      self.listForm.append(newItem)
      return
    else:
      temp = self.starter
      self.listForm.append(newItem)
      while(temp.next != None):
        temp = temp.next
      temp.next = newItem

    while(temp.next != None):
        placeHolder = temp
        temp.next.prev = placeHolder
        temp = temp.next
        
    for i in range(len(self.listForm)):
      self.listForm[i].index = i


  def printList(self):
    temp = self.starter
    if(temp != None):
      while (temp != None):
        print("Index " + str(temp.index) + " has a value of " + str(temp.value))
        temp = temp.next
      print()
    else:
      raise Exception("Invalid Linked List or Linked List has not been initialized.")

  def __printContext(self):
    temp = self.starter
    index = 0
    if(temp != None):
      while (temp != None):
        if (temp.prev != None):
          previousOutput = "For index " + str(temp.index) + " with value of " + str(temp.value) + " the previous value is " + str((temp.prev).getValue()) + " with an index of " + str((temp.prev.index))
        else:
          previousOutput = "For index " + str(temp.index) + " with value of " + str(temp.value) + " the previous item does not exist"
        if (temp.next != None):
          nextOutput = " and the next value is " + str((temp.next).getValue()) + " with an index of " + str((temp.next.index)) + "."
        else:
          nextOutput = " and the next item does not exist."
        temp = temp.next
        index += 1
        print(previousOutput + nextOutput)
      print()
    else:
      raise Exception("Invalid Linked List or Linked List has not been initialized.")

  def getContext(self, enablePrints: bool = False) -> list[list]:
    temp: Item = self.starter
    index: int = 0
    output: list[list] = []
    if (temp != None):
      while (temp != None):
        innerOutput: list = []
        if (temp.prev != None):
          innerOutput.append(temp.prev.getValue())
        else:
          innerOutput.append(None)
        innerOutput.append(temp.getValue())
        if (temp.next != None):
          innerOutput.append(temp.next.getValue())
        else:
          innerOutput.append(None)
        temp = temp.next
        index += 1
        output.append(innerOutput)
    else:
      raise Exception("Invalid Linked List or Linked List has not been initialized.")
    
    if (enablePrints):
      print(output)

  def getItem(self, targetIndex: int) -> Item:
    temp = self.starter
    while (temp.next != None):
      print((temp.next).value)
      if (temp.index == targetIndex):
        return temp
    return None