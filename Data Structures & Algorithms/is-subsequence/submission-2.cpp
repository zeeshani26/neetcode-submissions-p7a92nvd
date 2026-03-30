class Solution {
public:
    bool isSubsequence(string s, string t) {

        // Use two pointer approach
        if(t.size()<s.size()){
            return false;
        }
        int j = 0;
        int i = 0;
        while(i<s.size() && j<t.size()){
                if(s[i] == t[j]){
                        i++;
                }
                j++;
        }
        if(i>=s.size()){
                return true;
        }
        return false;
    }
};