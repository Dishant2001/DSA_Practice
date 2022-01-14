class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //Dynamic Programming
        //Bottom-Up approach using Tabulation
        //simply store minimum coins required for obtaining all amounts till required amount
        vector<int>dp(amount+1,amount+2); 
        dp[0]=0; //0 coins required to obtain 0 amount
        for(int i=1;i<amount+1;++i){
            for(int j=0;j<coins.size();++j){
                if(i-coins[j]>=0){
                    dp[i]=min(dp[i],1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[amount]!=amount+2)
            return dp[amount];
        else
            return -1;
    }
};