class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums[0];
        while(l<=r){
            if(nums[l] <= nums[r]){
                ans = min(nums[l],ans);
            }
            int mid = l + (r-l) / 2;
            ans = min(nums[mid],ans);
            if(nums[l] <= nums[mid]){
                l = mid+1;
            }
            else{
                r = mid - 1;
            }

        }
        return ans;
    }
};
