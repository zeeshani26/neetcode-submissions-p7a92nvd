class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        h = {}

        for i, num in enumerate(nums):
            val = target - num
            if val in h:
                return [h[val], i]
            else:
                h[num] = i

        return [0,0]