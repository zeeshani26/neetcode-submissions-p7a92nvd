class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for(string& i: strs){
            encoded = encoded + to_string(i.size()) + '#' + i;
        }
        cout<<"Encoded:"<<encoded;
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string ans = "";
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#' && j<s.size()){
                j++;
            }

            int count = stoi(s.substr(i, j - i));
            int iterator = 0;
            i = j+1;
            while(iterator < count){
                ans += s[i];
                iterator++;
                i++;
            }
            strs.push_back(ans);
            ans = "";
        }

        return strs;
    }
};
