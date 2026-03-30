class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> group;

    for(int j=0; j<strs.size(); j++){
        string copied = strs[j];
        sort(copied.begin(), copied.end());
        group[copied].push_back(strs[j]); // sort ke baad cat and act ka group ek hi hoga since they are anagram
    }
    vector<vector<string>> result;
    for(auto& ele : group){
        result.push_back(ele.second);
    }
    return result;
    }
};

