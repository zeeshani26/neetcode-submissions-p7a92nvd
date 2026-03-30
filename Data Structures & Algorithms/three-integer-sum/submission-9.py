class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        arr = sorted(nums)
        ans = []

        for i, num in enumerate(arr):
            if arr[i] > 0 :
                return ans
            
            if i > 0 and arr[i] == arr[i-1]:
                continue
                
            l = i+1
           
            r = len(arr) - 1

            while(l<r):
                sums = arr[l] + arr[r] + num
                if sums == 0:
                    ans.append([num,arr[l], arr[r]])
                    while l<r and arr[r] == arr[r-1]:
                        r -= 1
                    while l<r and arr[l] == arr[l+1]:
                        l += 1
                    r -= 1
                    l += 1
                elif sums > 0:
                    r -= 1
                else:
                    l += 1
        return ans

        