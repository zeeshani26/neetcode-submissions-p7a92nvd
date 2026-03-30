class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        encoded.reserve(100);
        for(string& i: strs){
            encoded += to_string(i.size()) + '#' + i;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string ans = "";
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(j<s.size() && s[j] != '#'){
                j++;
            }
        int count = stoi(s.substr(i, j - i));

        i = j + 1;

        strs.push_back(s.substr(i, count));
        i += count;

        }

        return strs;
    }
};
