class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create unordered_map
        unordered_map<int, int> freq;
        // loop through array and find the element - target value in the existing map
        // two values of map would be <element, position>
        int counts = 0;
        for(int& i: nums){

            if(freq.count(target - i)){
                if(counts < freq[target-i]){
                    return {counts, freq[target-i]};
                }
                else{
                    return {freq[target-i], counts};
                }
            }
            else{
                freq[i] = counts; 
            }
            counts++;
        }

     
    }
};
