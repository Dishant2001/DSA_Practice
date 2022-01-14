//Dynamic Programming
//Top-Down Approach

class Solution {
    private:

int dp[2515];
int lis(int n, vector<int>& a){
    if(dp[n] != -1) return dp[n];
    int ans = 1;
    for(int i = 0; i < n; i++){
        if(a[n] > a[i]){
            ans = max(ans, lis(i , a) +1 );
        }
    }
        return dp[n] = ans;
}
public:

int lengthOfLIS(vector<int>& nums) {
    memset(dp, -1,sizeof(dp));
    int ans = 0;
    for(int i = 0; i< nums.size(); i++){
        ans = max(ans, lis(i, nums));
    }
    return ans;

}
};
// public:
//     int dp[2550]={-1};
//     int LIS(int i,vector<int>&nums){
//         if(dp[i]!=-1)
//             return dp[i];
//         int ans=1;
//         for(int j=0;j<i;++j){
//             if(nums[j]<nums[i]){
//                 ans=max(ans,LIS(j,nums)+1);
//             }
//         }
//         return dp[i]=ans;
//     }
    
//     int lengthOfLIS(vector<int>& nums) {
//         int n=nums.size(),ans=0;
//         for(int i=0;i<n;++i){
//             ans=max(ans,LIS(i,nums));
//         }
//         return ans;
//     }
// };