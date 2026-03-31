class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1

        while l <= r:
            m = (l+r) // 2
            if nums[m] == target:
                return m
                # this means left is sorted, so just check if its in left or not
            elif nums[m] > nums[r]:
                # m we already checked so we are just checking if its equal to l
                if nums[l] <= target and target < nums[m]:
                    r = m - 1
                else:
                    l = m + 1
                # else right is sorted, so checking if its in right or not
            else:
                # m we already checked so we are just checking if its equal to r
                if nums[r] >= target and target > nums[m]:
                    l = m + 1
                else:
                    r = m - 1
        
        return -1
