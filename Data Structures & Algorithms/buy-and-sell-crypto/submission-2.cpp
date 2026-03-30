class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Do pointers approach

        int n = prices.size();
        int i = 0;
        int finalProfit = 0;
        int j = 0;
        while(j<n && i < n){
            j = i + 1;
            int profit = 0;
            while(j<n && prices[j] > prices[i]){
                profit = max(profit, prices[j] - prices[i]);
                j++;
            }
            finalProfit = max(profit,finalProfit);
            i = j;    
        }
        return finalProfit;
    }
};
