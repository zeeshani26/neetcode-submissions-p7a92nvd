class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Create a frequency map
        unordered_map<int,int> freq;
        
        for(int& i: nums){
            freq[i]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto& [key, val] : freq){
            bucket[val].push_back(key);
        }
        vector<int> ans;
        for(int i = nums.size() ; i >= 0 && k>0; i--){
            if(!bucket[i].empty()){
                for(int j = 0; j < bucket[i].size() && k > 0; j++){
                    ans.push_back(bucket[i][j]);
                    k--;
                }
            }
        }

        return ans;
        
        // Create an array of size n+1? 
        // The position of the element will be its frequency 
        // and the value would be an array of all teh elements with the frequency


        // loop through the major array from the left until k == 0 (inner loop to be added too)
    }
};
