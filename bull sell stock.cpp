/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       /*
       
       *****this gave TLE as time complexitiy is of o(n^2)********
       
        int n=prices.size();
        int maxprofit=0;
        int current_profit=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
              current_profit=prices[j]-prices[i];
              if(current_profit > maxprofit && current_profit >0)
              maxprofit=current_profit;
            }

        }
        return maxprofit;*/

         int n= prices.size();
         int buyAtPrice = INT_MAX;
         int maxProfit = 0;
        for(int i=0; i<n; i++){
            buyAtPrice = min(buyAtPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - buyAtPrice); 
        }
        return maxProfit;







 }
};