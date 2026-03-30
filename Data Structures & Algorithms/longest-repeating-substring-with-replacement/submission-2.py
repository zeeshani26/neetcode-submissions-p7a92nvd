class Solution:
    def characterReplacement(self, s: str, k: int) -> int:

        # use frequency map

        # 
        n = len(s)
        l = 0
        r = 0
        freq = {}
        highestFreq = 0
        ans = 0
        while r<n:
            freq[s[r]] = 1 + freq.get(s[r],0)
            highestFreq = max(highestFreq,freq[s[r]])

            if r-l+1 - highestFreq > k:
                while r-l+1 - highestFreq > k:
                    freq[s[l]] -= 1
                    l += 1
                
            ans = max(ans,r-l+1)
            r += 1

        return  ans


        