class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0],profit=0,i;
        int n=prices.size();
        for(i=0;i<n;i++)
        {
            minimum=min(minimum,prices[i]);
            profit=max(profit,prices[i]-minimum);
        }
       return profit;
    }
};
