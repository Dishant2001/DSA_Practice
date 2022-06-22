//Dynamic programming--> Bottom-up approach

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),start,end;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=0;i<n;++i){
            for(int j=0;j+i<n;++j){
                if(i==0&&s[j]==s[j+i])
                    dp[j][j+i]=true;
                else if(i==1&&s[j]==s[j+i])
                    dp[j][j+i]=true;
                else if(i>=2&&s[j]==s[j+i]&&dp[j+1][j+i-1]==true)
                    dp[j][j+i]=true;
                if(dp[j][j+i]==true){
                    start=j;
                    end=i;
                }
            }
        }
        // cout<<start<<" "<<end;
        return s.substr(start,end+1);
    }
};