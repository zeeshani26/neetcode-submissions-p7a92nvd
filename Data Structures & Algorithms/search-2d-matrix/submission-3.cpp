class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        int rows = matrix.size();
        int cols = matrix[0].size();
        int l = 0;
        int r = (rows * cols) - 1;

        while(l<=r){
            int mid = l+(r-l)/2;
            int midValue = matrix[mid/cols][mid%cols];
            if(midValue == target){
                return true;
            }
            else if(target > midValue){
                l = mid + 1;
            }
            else{
                r = mid - 1;  
            }
        }
        return false;
    }
};
