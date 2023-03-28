class Node:
    def __init__(self,data):
        self.data = data
        self.next = None


class LinkedList:

    def __init__(self):
        self.size = 0
        self.head = None


    def getSize(self):
        return self.size

    
    def insertBegin(self,val):

        temp = Node(val)

        if self.head == None:
            self.head = temp
        else:
            temp.next = self.head
            self.head = temp

        self.size += 1

        return

    
    def insertEnd(self, val):

        temp = Node(val)
        
        if self.head == None: 
            self.head = temp
            return
        
        t = self.head
        
        while t.next != None:
            t = t.next
        
        t.next = temp
        
        self.size += 1

        return

    
    def insertAtPos(self,val,pos):

        if pos > self.size:
            self.insertEnd(val)
            return

        if pos <= 1:
            self.insertBegin(val)
            return

        temp = Node(val)
        
        if self.head == None:  # No element
            self.head = temp
            self.tail = temp
            self.size += 1
            return

        t = self.head

        while t != None and (pos-1) > 1:
            t = t.next
            pos -= 1

        temp.next = t.next
        t.next = temp
            
        self.size += 1

        return
    
    
    def deleteBegin(self):
        
        if self.head == None:
            print("No list!")
            return
  
        t = self.head
        self.head = self.head.next
        t = None
        
        self.size -= 1
        
        return
        
    
    def deleteEnd(self):
        
        if self.head == None:
            print("No list")
            return
          
        temp = self.head
        
        while temp.next != None:
                temp = temp.next
        
        val = temp.data
        temp = None
        
        self.size -= 1
        
        return val
    
    
    def deleteAtPos(self,pos):
        
        if pos >= self.size:
            self.deleteEnd()
            return

        if pos <= 1:
            self.deleteBegin()
            return
        
        temp = self.head
        
        while temp.next != None and (pos-1) > 1:
            temp = temp.next
            pos -= 1
            
        p = temp.next
        temp.next = temp.next.next
        
        val = p.data
        p.next = None
        p = None
        
        self.size -= 1
        
        return val
    
    
    def searchByVal(self,val):
        
        if self.head == None:
            print("No list!")
            return None
        
        t = self.head
        pos = 1
        
        while t != None:
            if t.data == val:
                return pos
            pos += 1
            t = t.next
        
        return None
        
    def searchByPos(self, pos):
        
        if pos > self.size or pos < 1:
            print("Invalid position")
            return None
        
        t = self.head
        
        while t.next != None and (pos-1) >= 1:
            pos -= 1
            t = t.next
        
        return t.data
        
        
    def deleteByPos(self,pos):
        
        if pos > self.size or pos < 1:
            print("Invalid position")
            return None
        
        if pos == 1:
            val = self.head.data
            self.head = self.head.next
            return val
            
        t = self.head
        
        while t.next != None and (pos-1) > 1:
            t = t.next
            pos -= 1
        
        p = t.next
        t.next = t.next.next
        
        val = p.data
        p.next = None
        p = None
        
        self.size -= 1
        
        return val
    

    def deleteByVal(self,val):
        
        pos = self.searchByVal(val)
        
        if pos != None:
            return self.deleteByPos(pos)
        
        return None


    def display(self):

        if self.head == None:
            print("No list!")
            return

        t = self.head
        
        while t != None:
            print("{}-> ".format(t.data), end = "")
            t = t.next

        print("NULL")
        return
