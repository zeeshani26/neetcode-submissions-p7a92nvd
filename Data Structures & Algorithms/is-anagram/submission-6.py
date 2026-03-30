class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        alpha = [0] * 26

        for char_s, char_t in zip(s,t):
            alpha[ord(char_s) - ord('a')] += 1
            alpha[ord(char_t) - ord('a')] -= 1

        for i in alpha:
            if i != 0:
                return False

        return True;

        