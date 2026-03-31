class Solution:
    def findMin(self, nums: List[int]) -> int:
        l = 0
        r = len(nums) - 1
        if r == 0:
            return nums[0]

        ans = 1001
        while l<=r:
            mid = (r+l) // 2
            ans = min(nums[mid],ans)
            if nums[mid] > nums[r]:
                l = mid + 1
            else:
                if mid > 0 and nums[mid] < nums[mid-1]:
                    return nums[mid]
                else:
                    r = mid - 1
        return nums[l]


        