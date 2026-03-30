class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> s;

        for(int i : nums){
            s[i]++;
        }

        if(nums.size() == s.size()){
            return false;
        }

        return true;
    }
};