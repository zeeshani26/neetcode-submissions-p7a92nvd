class Solution:

    def encode(self, strs: List[str]) -> str:
        res = []
        for i in strs:
            res.append(str(len(i)) + "#" + i)
        

        return "".join(res)
    def decode(self, s: str) -> List[str]:
        print(s)
        res = []
        i = 0;
        while(i<len(s)):
            j = i
            count = 0;
            if(s[j] != "#"):
                curr = ""
                while(s[j] != "#"):
                    curr += s[j]
                    j += 1
                count = int(curr)
            cstring = s[j+1:(j+1+count)]
            res.append(cstring)
            i = j+count+1
        return res