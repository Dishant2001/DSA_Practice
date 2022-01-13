//Dynamic programming
//Storing previous maximum amounts of robbery

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(),i;
        if(n==1)
            return nums[0];
        int *prev=new int[nums.size()];
        prev[0]=nums[0];
        prev[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;++i){
            prev[i]=max(nums[i]+prev[i-2],prev[i-1]);
        }
        return prev[n-1];
    }
};