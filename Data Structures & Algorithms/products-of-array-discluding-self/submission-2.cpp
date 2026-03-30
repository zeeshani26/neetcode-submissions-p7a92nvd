class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Create 2 arrays of nums.size() + 2. Post and Pre
        int n = nums.size();
        vector<int> post(n);
        vector<int> pre(n);
        vector<int> ans(n); 
        pre[0] = 1;
        post[0] = 1;
        pre[n-1] = 1;
        post[n-1] = 1;
        
        // For prefix
        for(int i = 1; i < n ; i++){
            pre[i] = pre[i-1] * nums[i-1];
        }
        // for post
        for(int i = n-2; i>=0;i--){
            post[i] = post[i+1] * nums[i+1];
        }

        for(int i=0; i<n ; i++){
            ans[i] = post[i] * pre[i];
        }
        return ans;
        
    }
};
