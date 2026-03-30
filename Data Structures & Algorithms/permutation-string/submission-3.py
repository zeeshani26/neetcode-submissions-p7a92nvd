class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n = len(s1)
        m = len(s2)
        if n > m:
            return False
        f1 = {}
        f2 = {}
        r = 0
        l = 0
        while r<n:
            f1[s1[r]] = f1.get(s1[r],0) + 1
            f2[s2[r]] = f2.get(s2[r],0) + 1
            r += 1

        if f1 == f2:
            return True

        while r<m:
            f2[s2[r]] = f2.get(s2[r],0) + 1
            f2[s2[l]] -= 1
            if f2[s2[l]] == 0:
                f2.pop(s2[l],None)

            if f1==f2:
                return True
            
            r += 1
            l += 1

        return False


        



