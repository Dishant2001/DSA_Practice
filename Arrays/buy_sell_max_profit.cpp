class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,profit=0,bought=prices[0];
        for(i=0;i<prices.size();++i){
            bought=min(bought,prices[i]);
            profit=max(profit,prices[i]-bought);
        }
        return profit;
    }
};