class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
       for(int j=0; j<strs[0].size();j++){
        char current = strs[0][j];
        for(int i = 1; i<strs.size();i++){
            // check till failure
            if(j >= strs[i].size() || strs[i][j] != current){
                return strs[0].substr(0,j);
            }
        }
       }
       // in case of full match
       return strs[0];       
    }
};