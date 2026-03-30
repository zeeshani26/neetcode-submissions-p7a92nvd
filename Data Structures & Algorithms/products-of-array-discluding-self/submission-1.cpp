class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Create 2 arrays of nums.size() + 2. Post and Pre
        int n = nums.size();
        vector<int> post(n+2, 1);
        vector<int> pre(n+2, 1);
        pre[0] = 1;
        post[0] = 1;
        pre[n] = 1;
        post[n] = 1;
        
        // Loop through the nums array and populate post and pre
        
        for(int i = 1, j = n ; i<=n && j>=0; i++,j--){
            pre[i] = pre[i-1] * nums[i-1];
            post[j] = post[j+1] * nums[j-1];
        }
        vector<int> ans(n);
        for(int i=0; i<n;i++){
            ans[i] = pre[i] * post[i+2];
        }
        return ans;
        
    }
};
