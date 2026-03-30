class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n = len(heights) - 1
        l = 0
        r = n
        ans = 0
        while l<r:
            width = r - l 
            height = min(heights[l],heights[r])
            area = width * height
            if area > ans:
                ans = area
            if l< r and heights[l] < heights[r]:
                l += 1
            elif l< r and heights[r] < heights[l]:
                r -= 1
            else:
                r -= 1
                l += 1

        return ans