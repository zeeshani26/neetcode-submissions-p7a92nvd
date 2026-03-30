class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Create a frequency map
        unordered_map<int,int> freq;

        for(int i=0; i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> arr;

        for(const auto& pairs:freq){
            arr.push_back({pairs.second, pairs.first});
        }

        sort(arr.rbegin(), arr.rend());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(arr[i].second);
        }
        return ans;
        
    }
};
