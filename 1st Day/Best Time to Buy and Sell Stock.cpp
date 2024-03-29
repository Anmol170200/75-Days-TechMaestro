class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int diff=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            diff=prices[i]-buy;
            buy=min(buy,prices[i]);
            profit=max(diff, profit);
        }
        return profit;
    }
};