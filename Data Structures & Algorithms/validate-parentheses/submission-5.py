class Solution:
    def isValid(self, s: str) -> bool:
        stack  = []

        for st in s:
            if st != '(' and st !='{' and st !='[' and st !=')' and st !='}' and st !=']':
                return False
            elif st == '(' or st == '{' or st == '[' or len(stack) == 0:
                stack.append(st)
            else:
                pv = stack[-1]
                if (pv == '(' and st == ')') or (pv == '{' and st == '}') or (pv == '[' and st == ']'):
                    stack.pop()
                else:
                    return False
        
        if len(stack) == 0:
            return True
        else:
            return False
        