class Solution {
public:
    int trap(vector<int>& height) {

        // Two pointer using this:
        // The water at each position is simply: 
        // max wall on that side – height at that position
        // dry run
        int l = 0;
        int r = height.size() - 1;
        int res = 0;
        int lmax = 0;
        int rmax = 0;
        while(l<r){
            if(height[l] < height[r]){
                lmax = max(lmax,height[l]);
                res += max(lmax,rmax) - height[l];
                l++;
            }
            else{
                rmax = max(rmax,height[r]);
                res += max(lmax,rmax) - height[r];
                r--;
            }
        }
        return res;
    }
};
