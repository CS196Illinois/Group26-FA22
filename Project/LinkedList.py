class Item:
  def __init__(self, value):
    self.value = value
    self.next = None
    self.index = 0

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
    for i in range(len(self.listForm)):
      self.listForm[i].index = i


  def printList(self):
    temp = self.starter
    if(temp != None):
      print("CONTENTS:", end=" ")
      while (temp != None):
        print(temp.value, end=" with index: " + str(temp.index) + ", ")
        temp = temp.next
      print()
    else:
      print("NOT YET INITIALIZED")

  def printContext(self):
    temp = self.starter
    index = 0
    if(temp != None):
      print("CONTENTS:", end=" ")
      while (temp != None):
        if (self.getItem(index) != None):
          print(temp.value, end="prev = " + str(self.getItem(index - 1).value) + ", ")
        else:
          print(temp.value, end="prev = None , ")
        temp = temp.next
        index += 1
      print()
    else:
      print("NOT YET INITIALIZED")

  def getItem(self, targetIndex: int) -> Item:
    temp = self.starter
    while (temp.next != None):
      print((temp.next).value)
      if (temp.index == targetIndex):
        return temp
    return None