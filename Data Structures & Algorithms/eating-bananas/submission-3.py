class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        n = len(piles)
        
        mx = 0
        for i in piles:
            if i > mx:
                mx = i

        l = 1
        r = mx
        ans = -1
        while l <= r:
            mid = (l+r) // 2
            time = 0
            # Calculate time take to eat with mid value
            for i in piles:
                time += math.ceil(i/mid)
            if time <= h:
                ans = mid
                r = mid - 1
            else:
                l = mid + 1

        return ans

        