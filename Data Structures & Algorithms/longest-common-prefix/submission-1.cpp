class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int j=0; j<strs[0].size();j++){
            char current = strs[0][j];

            for(int i=0; i<strs.size();i++){
                if(j>strs[i].size() || current != strs[i][j]){
                    return ans;
                }
            }
            ans += current;

        }
        return ans;
    }
};