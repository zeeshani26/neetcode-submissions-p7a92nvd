class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int l = 0;
        int r = nums.size() - 1;
        int ans = nums[0];
        while(l<=r){
            // check if left < right
            if(nums[l] <= nums[r]){
                ans = min(nums[l],ans);
            }
            int mid = l + (r-l) / 2;
            ans = min(ans,nums[mid]);
            if(nums[l] <= nums[mid]){
            // we already know left is not smaller thn right, so left to mid cant have min
                l = mid+1;
            }
            else{
                r = mid - 1;
            }

        }
        return ans;
    }
};
