class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        alpha = [0] * 26

        for i in range(len(s)):
            val = ord(s[i]) - ord('a')
            val2 = ord(t[i]) - ord('a')
            alpha[val] += 1
            alpha[val2] -= 1

        for i in alpha:
            if i != 0:
                return False

        return True;

        