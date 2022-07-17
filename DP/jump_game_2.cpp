class Solution {
public:
    int jump(vector<int>& arr) {
        int n=arr.size();
        vector<long long>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;++i){
            for(int j=i;j<arr[i-1]+i;++j){
                if(j<n){
                    dp[j]=min(dp[j],dp[i-1]+1);
                }
                else
                    break;
            }
        }
        for(int i=0;i<n;++i)
            cout<<dp[i]<<" ";
        cout<<endl;
        return dp[n-1];
    }
};