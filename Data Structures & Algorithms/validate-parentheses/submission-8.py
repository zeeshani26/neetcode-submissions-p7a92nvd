class Solution:
    def isValid(self, s: str) -> bool:
        stack  = []

        for st in s:
            if st in '({[':
                stack.append(st)
            elif st in ')}]':
                if len(stack) == 0:
                    return False
                pv = stack[-1]
                if st == ')' and pv == '(' or st == '}' and pv == '{' or st == ']' and pv == '[':
                    stack.pop()
                else:
                    return False
            else:
                return False
        
        if len(stack) == 0:
            return True
        else:
            return False
        