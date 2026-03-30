class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # create a set
        # check for i-1 in set and create while loop pnly if i-1 exists

        c = set()

        for i in nums:
            c.add(i)
        
        count = 0
        ans = 0

        for i in c:
            if i-1 not in c:
                count = 1
                val = i + 1
                while val in c:
                    val += 1
                    count += 1
            if count > ans:
                ans = count

        return ans 
        