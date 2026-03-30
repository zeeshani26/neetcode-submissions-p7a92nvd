class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        for(int i = n-1;i>=0;i--){
                if (s[i] != ' ') {
                        count++;
                } 
                else if (count > 0) {
                // We found a space AND we've already started counting a word
                return count;
            }
        }
        return count;
    }
};