class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1){
            return 1;
        }
        if(s.size() == 0){
            return 0;
        }
        unordered_set<int> subString;
        int i = 0;
        int j = 1;
        int n = s.size();
        int ans = 1;
        subString.insert(s[i]);
        while(j<n){
                while(!subString.insert(s[j]).second){
                    subString.erase(s[i]);
                    i++;
                } 
                subString.insert(s[j]);
                ans = max(ans, j - i + 1); 
                j++;          
            
        }
        return ans;
        }
};
