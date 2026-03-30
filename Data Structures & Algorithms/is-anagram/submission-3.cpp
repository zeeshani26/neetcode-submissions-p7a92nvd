class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> count(26,0);

        for(int i = 0; i<t.size();i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(const auto& el: count){
            if(el!=0){
                return false;
            }
        }
        return true;

    }
};
