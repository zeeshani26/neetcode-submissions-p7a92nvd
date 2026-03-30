class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // create a set of all elements and a count
        unordered_set<int> s;

        for(int& i: nums){
            s.insert(i);
        }

        int longest = 0;
        int ans = 0;
        for(int i=0; i<nums.size();i++){
            if(!s.count(nums[i] - 1)){
                longest = 1;
                int j = nums[i] + 1;
                while(s.count(j)){
                    longest++;
                    j++;
                }
                ans = max(ans, longest);
            }
        }
        return ans;
    }


    // skip the middle ones of consecutive sets
};
