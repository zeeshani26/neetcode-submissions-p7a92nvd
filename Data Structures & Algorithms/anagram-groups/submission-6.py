class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        hash = {}

        for i in strs:
            sortedVal = "".join(sorted(i))
            if sortedVal not in hash:
                newArr = []
                hash[sortedVal] = [i]
            else:
                hash[sortedVal].append(i)
        
        res = []
        for key in hash:
            res.append(hash[key])

        return res