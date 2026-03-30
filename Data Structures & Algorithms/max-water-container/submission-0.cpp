class Solution {
public:
    int maxArea(vector<int>& heights) {
       
       // Take two pointers on extreme end
       // loop while pointers are not equal and move the pointer which has smaller height

       int l = 0;
       int r = heights.size() - 1;
       int ans = 0;
       while(l<r){
        int lower_height = min(heights[l],heights[r]);
        int area = lower_height * (r-l);
        ans = max(area,ans);
        if(lower_height == heights[l]){
            l++;
        }
        else{
            r--;
        }
       }
       return ans; 
    }
};
