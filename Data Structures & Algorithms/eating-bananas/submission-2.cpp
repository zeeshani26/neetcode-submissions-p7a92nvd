class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = 0;
        for(int i = 0; i<piles.size();i++){
            r = max(r, piles[i]);
        }
        int l = 1;
        int ans = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            int k = totalTime(piles,mid);
            if(k <= h){
                r = mid - 1;
                ans = min(ans,mid);
            }
            else if(k>h){
                l = mid+1;
            }
        }
        return ans;

    }

    int totalTime(vector<int>& piles, int k){
        int sum = 0;
        int t = 0;
        for(int i = 0; i<piles.size(); i++){
            t = (piles[i] + k - 1)/ k;
            sum += t;
        }
        return sum;
    }
};
