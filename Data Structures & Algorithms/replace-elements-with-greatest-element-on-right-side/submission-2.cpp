class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max = arr[n-1];
        for(int i = n-1; i>=0;i--){
            int tmp = arr[i];
            arr[i] = max;
            if(tmp > max){
                max = tmp;
            }
            
        }
        arr[n-1] = -1;
        return arr;
    }
};