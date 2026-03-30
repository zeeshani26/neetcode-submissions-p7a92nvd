class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        int n = s.size();
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;
        for(int i = 0; i<n;i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }

        for(const auto& pairs : freq1){
            if(freq1[pairs.first] != freq2[pairs.first]){
                return false;
            }
        }
        return true;

    }
};
