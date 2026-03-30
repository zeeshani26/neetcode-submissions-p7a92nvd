class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Do pointers approach

        int n = prices.size();
        int rmax = 0;
        int sum = 0;
        for(int i = prices.size() - 1; i >= 0 ; i--){
            if(prices[i] > rmax ){
                rmax = prices[i];  // We need the biggest only on theleft
            }
            else{
                sum = max(sum,(rmax - prices[i]));
            }
        }
        return sum;
    }
};
