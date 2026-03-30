class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0
        r = 1
        n = len(prices)
        ans = 0
        while r < n:
            if prices[l] > prices[r]:
                l = r
                r = l + 1
            else:
                profit = prices[r] - prices[l]
                if profit > ans:
                    ans = profit
                r += 1

        return ans
        