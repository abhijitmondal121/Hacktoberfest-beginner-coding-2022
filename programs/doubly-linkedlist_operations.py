class Node:
   def __init__(self, data):
      self.data = data
      self.nref = None
      self.pref = None
class dlinkedlist:
    def __init__(self):
        self.head = None
    def displayElements(self):
        if self.head is None:
            print("Linked list is empty")
        else:
            n= self.head
            while n is not None:
                print(n.data,"-->",end=" ")
                n = n.nref
    def displayElementsinrev(self):
        print()
        if self.head is None:
            print("Linked list is empty")
        else:
            n= self.head
            while n.nref is not None:
                n = n.nref
            while n is not None:
                print(n.data,"-->",end=" ")
                n = n.nref
    def inserAtend(self,data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            n = self.head
            while n.nref is not None:
                n = n.nref
            n.nref = new_node
            new_node.pref = n
    
    def ifValueExist(self,x):
        n=self.head
        if n is None:
            print(bool(n))
        else:
            print(bool(n))
    def deletebyValue(self,x):
        if self.head is None:
            print("DLl is Empty can't delete ")
            return
        if self.head.nref is None:
            if x==self.head.data:
                self.head = None
            else:
                print(" x is not present  ")
            return
        if self.head.data == x:
            self.head = self.head.nref
            self.head.pref = None
            return
        n= self.head 
        while n.nref is not None:
            if x==n.data:
                break
            n = n.nref
        if n.nref is not None:
            n.nref.pref=n.pref
            n.pref.nref=n.nref
        else:
            if n.data==x:
                n.pref.nref = None
            else:
                print("x is not presnt in DLL ")


DL1=dlinkedlist()
DL1.inserAtend(20)
DL1.inserAtend(10)
DL1.inserAtend(25)
DL1.displayElements()
DL1.deletebyValue(10)
DL1.ifValueExist(10)
DL1.displayElementsinrev()