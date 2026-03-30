class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # create a 
        # iterate through array and push to set if empty and if i+1 is in freq map
        # skip if its already part of set

        c = set()

        for i in nums:
            c.add(i)
        
        count = 0
        ans = 0

        for i in nums:
            if i-1 not in c:
                count = 1
                val = i + 1
                while val in c:
                    val += 1
                    count += 1
            if count > ans:
                ans = count

        return ans 
        