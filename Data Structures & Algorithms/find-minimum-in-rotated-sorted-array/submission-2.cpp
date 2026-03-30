class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int l = 0;
        int r = nums.size() - 1;
        int ans = 1000;
        while(l<=r){
            if(nums[l] > nums[r]){
                ans = min(ans,nums[r]);
                r--;
                l++;
            }
            else{
                ans = min(nums[l],ans);
                break;
            }
        }
        return ans;
    }
};
