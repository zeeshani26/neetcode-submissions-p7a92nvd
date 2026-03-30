class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for i in tokens:
            if i.isdigit() or (i.startswith('-') and i[1:].isdigit()):
                stack.append(int(i))
            else:
                first = stack.pop()
                second = stack.pop()
                ans = 0
                if i == "+":
                    ans = second + first
                elif i == "-":
                    ans = second - first
                elif i == "*":
                    ans = second * first
                else:
                    ans = int(second / first)
                
                stack.append(int(ans))

        return stack.pop()

        