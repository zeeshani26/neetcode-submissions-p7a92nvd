class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}

        for num in nums:
            freq[num] = freq.get(num,0) + 1 
        
        arr = [[] for _ in range(len(nums)+1)]        
        
        for key in freq:
            arr[freq[key]].append(key)

        res = []
        count = 0
        

        for i in range(len(arr) - 1, -1, -1):
            for j in range(len(arr[i])-1, -1,-1):
                res.append(arr[i][j])
                count += 1
                if count == k:
                    return res
                
        return res