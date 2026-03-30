class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> group;

    for(int j=0; j<strs.size(); j++){
        string orig = strs[j];
        sort(strs[j].begin(), strs[j].end());
        group[strs[j]].push_back(orig);
    }
    vector<vector<string>> result;
    for(auto& ele : group){
        result.push_back(ele.second);
    }
    return result;
    }
};

