class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        arra = [0] * len(temperatures)
        for i in reversed(range(len(temperatures))):
            if len(stack) == 0:
                stack.append(i)
            elif temperatures[stack[-1]] <= temperatures[i]:
                while len(stack) != 0 and temperatures[stack[-1]] <= temperatures[i]:
                    stack.pop()
                if len(stack) == 0:
                    stack.append(i)
                else:
                    arra[i] = stack[-1] - i
                    stack.append(i)  
            else:
                stack.append(i)
                arra[i] = 1
        
        return arra
                

        