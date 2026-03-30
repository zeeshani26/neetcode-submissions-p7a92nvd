class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = ""
        for i in strs:
            encoded_string +=  str(len(i)) + "#" + i
        
        return encoded_string
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