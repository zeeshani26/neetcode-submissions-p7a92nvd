class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre = []
        mult = 1;
        for i in nums:
            pre.append(mult)
            mult *= i

        post = []
        mult = 1;
        for i in range(len(nums)-1,-1,-1):
            post.append(mult)
            mult *= nums[i]

        post.reverse()
        ans = [0] * len(pre)
        for i in range(len(pre)):
            ans[i] = pre[i] * post[i]

        return ans