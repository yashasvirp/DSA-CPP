class Stack:
    
    def __init__(self):
        self.s = []
        self.size = 0
        
    def push(self, val):
        self.s.append(val)
        self.size += 1
    
    def getTop(self):
        if self.size == 0:
            print("Empty stack!")
            return
        return self.s[self.size-1]
    
    def pop(self):
        if self.size == 0:
            print("underflow!")
            return
        self.size -= 1
        return self.s.pop()
    
    def display(self):
        print(self.s)
