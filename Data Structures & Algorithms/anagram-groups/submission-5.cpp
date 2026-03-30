class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // create a hashmap
        unordered_map<string,vector<string>> group;
        // iterate and sort the string element first
        // if sorted string element matches any key in the map, push it as a array element value
        // if not, create a new key with the sorted string

        for(int i = 0; i< strs.size(); i++){
            string curr = strs[i];
            sort(strs[i].begin(),strs[i].end());
            group[strs[i]].push_back(curr);
            
        }
        // loop through hashmap and push pair.second to get result
        vector<vector<string>> result;
        for(auto& ele : group){
            result.push_back(ele.second);
        }

        return result; 
    }
};

