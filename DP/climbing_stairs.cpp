//Tabulation -> Bottom-up approach

class Solution {
public:
    int dp[46];
    
    int climb(int i){
        if(i==0)
            return 1;
        if(i<0)
            return 0;
        if(dp[i]>0)
            return dp[i];
        dp[i]=climb(i-1)+climb(i-2);
        return dp[i];
    }
    
    int climbStairs(int n) {
        climb(n);
        return dp[n];
    }
};