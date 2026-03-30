class Solution {
public:
    int trap(vector<int>& height) {
        int totalArea = 0;
        int l = 0;
        int n = height.size();
        vector<int>left;
        vector<int>right;
        int lmax = 0;
        int rmax = 0;
        for(int i = 0; i < n; i++){
            if(height[i] > lmax){
                lmax = height[i];
            }
            left.push_back(lmax);
        }

        for(int j = n-1; j >= 0; j--){
            if(height[j] > rmax){
                rmax = height[j];
            }
            right.push_back(rmax);
        }
        reverse(right.begin(),right.end());
        int ans = 0;
        for(int i = 0; i<n;i++){
            int val = min(left[i],right[i]) - height[i];
            // cout<<val<<" | ";
            if(val > 0){
                ans += val;
            }
        }
        return ans;
    }
};
