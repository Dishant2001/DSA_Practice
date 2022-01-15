//Dynamic Programming
//Top-Down Approach

class Solution {
public:
    int LIS(int i,vector<int>&nums,vector<int>&dp){
        if(dp[i]!=-1)
            return dp[i];
        int ans=1;
        for(int j=i;j<nums.size();++j){
            if(nums[j]>nums[i]){
                ans=max(ans,LIS(j,nums,dp)+1);
            }
        }
        return dp[i]=ans;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        // memset(dp, -1,sizeof(dp));
        int n=nums.size(),ans=0;
        vector<int>dp(n,-1);
        for(int i=0;i<n;++i){
            ans=max(ans,LIS(i,nums,dp));
        }
        return ans;
    }
};