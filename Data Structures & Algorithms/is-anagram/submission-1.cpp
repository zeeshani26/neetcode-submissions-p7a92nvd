class Solution {
public:
    bool isAnagram(string s, string t) {
        // Two types Array + - solution
        // Frequency Map solution
        if(s.size() != t.size()){
            return false;
        }
        vector<int> freq(26, 0);

        for(int i=0; i< s.size(); i++){
            freq[s[i] - 97]++;
            freq[t[i] - 97]--;
        }

        for(int i=0; i < 26; i++){
            cout<<freq[i]<<" ";
            if(freq[i] != 0){
                return false;
            }
        }
        return true;

    }
};
