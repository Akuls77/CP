class Solution {
public:    // TC-> O(N) and SC-> O(1)
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];
        int cost; 

        for(int i=1; i<n; i++){
            cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(prices[i], mini);
        }
        return profit;
    }
};