class MinStack:

    def __init__(self):
        self.stack = []

    def push(self, val: int) -> None:
        self.stack.append(val)

    def pop(self) -> None:
        self.stack.pop()

    def top(self) -> int:
        tmp = self.stack[-1]
        return tmp

    def getMin(self) -> int:
        mini = 2 ** 31
        for i in self.stack:
            if i < mini:
                mini = i

        return mini
        
