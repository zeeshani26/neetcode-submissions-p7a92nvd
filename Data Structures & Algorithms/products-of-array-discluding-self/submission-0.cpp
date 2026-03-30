class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Loop through the array and see if 0 exists
        int total = 1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0){
                int j = i + 1;
                while(j<nums.size()){
                    if(nums[j]==0){
                        vector<int> arr(nums.size(),0);
                        return arr;
                    }
                    total *= nums[j];
                    j++;
                }
                vector<int> arr1(nums.size());
                arr1[i] = total;
                return arr1;

            }
            total *= nums[i];
        }
        // if 0 exists store its position

        // if 0 exists return the multiplication of all elements except in its own position


        // if no 0 exists multiply all elements and divide them by tehir individual element
        vector<int> arr2(nums.size(),total);
        for(int i =0; i<nums.size();i++){
            arr2[i] = arr2[i] / nums[i];
        }

        return arr2;
    }
};
