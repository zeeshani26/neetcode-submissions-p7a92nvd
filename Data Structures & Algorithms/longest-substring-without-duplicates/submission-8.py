class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
       # create a set and maxL
       count = set();
       maxL = 1
       n = len(s)
       if n == 1:
        return maxL
       if n == 0:
        return 0
       # have i and j, keep increasing j as long as s[j] isnt in set
       i = 0
       j = 1
       count.add(s[i])
       while j < n:
            if s[j] in count:
                while j<n and s[j] in count:
                    count.discard(s[i])
                    i += 1

            count.add(s[j]) 
            maxL = max(maxL,len(count))
            j += 1   

       return maxL
       # if s[j] in set keep increasing i and removing s[i] as long as s[j] in set thn
       # push s[j] in set