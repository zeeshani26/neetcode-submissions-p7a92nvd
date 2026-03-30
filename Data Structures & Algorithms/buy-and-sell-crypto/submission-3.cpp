class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Do pointers approach

        int n = prices.size();
        int i = 0;
        int finalProfit = 0;
        int j = 1;
        while(j<n){
            if(prices[j] > prices[i]){
                int profit = prices[j] - prices[i];
                finalProfit = max(profit,finalProfit);
            }
            else{
                i = j;
            }
            j++; 
        }
        return finalProfit;
    }
};
