class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size()<s.size()){
            return false;
        }
        int j = 0;
        for(int i = 0; i<s.size();i++){
                if(j>=t.size()){
                        return false;
                }
                else{
                        while(j<t.size()){
                        if(t[j] == s[i]){
                                j++;
                                break;
                        }
                        j++;
                        }
                }
            
        }
        
        return true;
    }
};