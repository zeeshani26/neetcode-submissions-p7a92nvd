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
        int j = 0;
        int n = s.size();
        int ans = 0;
        while(j<n){
            while(subString.count(s[j])){
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
