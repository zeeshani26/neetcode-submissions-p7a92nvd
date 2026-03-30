class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create unordered_map
        unordered_map<int, int> freq;
        // loop through array and find the target - element value in the existing map
        // two values of map would be <element, position>
        int index = 0;
        for(int& i: nums){

            if(freq.count(target - i)){
                if(index < freq[target-i]){
                    return {index, freq[target-i]};
                }
                else{
                    return {freq[target-i], index};
                }
            }
            else{
                freq[i] = index; 
            }
            index++;
        }

    }
};
