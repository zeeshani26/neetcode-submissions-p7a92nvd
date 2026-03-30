class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort
        sort(nums.begin(), nums.end());

        // do two pointers
        vector<vector<int>> ans;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] > 0){
                break;
            }
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int target = -(nums[i]);
            // cout<<"Target: "<<target<<" ";
            int j = i+1;
            int k = nums.size()-1;
            // cout<<"i: "<<i<<" j: "<<j<<" k: "<<k<<"\n";
            while(j<k){
                // cout<<"j: "<<nums[j]<<" k: "<<nums[k]<<"\n";
                if(nums[j] + nums[k] == target){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while (j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k - 1]) {
                        k--;
                    }
                    j++;
                    k--;
                }
                else if(nums[j] + nums[k] > target){
                    k--;
                    continue;
                }
                else{
                    j++;
                    continue;
                }
            }
        }

        return ans;
    }
};
