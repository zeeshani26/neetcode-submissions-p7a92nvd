class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int rmax = 0;
        int sum = 0;
        for(int i = prices.size() - 1; i >= 0 ; i--){
            cout<<prices[i]<<" "<<"rmax: "<<rmax<<"\n";
            if(prices[i] > rmax ){
                rmax = prices[i];
            }
            else{
                sum = max(sum,(rmax - prices[i]));
            }
        }
        return sum;
    }
};
