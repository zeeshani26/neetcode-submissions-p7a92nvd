class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        arra = [0] * len(temperatures)
        for i in reversed(range(len(temperatures))):
            # if stack exists and top is less thn and 'equal' to i, keep popping
            while stack and temperatures[stack[-1]] <= temperatures[i]:
                stack.pop()

            if stack:
                arra[i] = stack[-1] - i

            # Have to push the latest anyhow
            stack.append(i)

        return arra

            
                

        