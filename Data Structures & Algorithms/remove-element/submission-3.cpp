class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int valid = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] != val){
                nums[valid] = nums[i];
                valid++;
            }
        }
        return valid;
    }
};