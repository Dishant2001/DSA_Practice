//Recursion and Backtracking

class Solution {
public:
    void permutations(vector<int>&output,vector<int>&nums,int done[],vector<vector<int>>&ans){
        if(output.size()==nums.size()){
            ans.push_back(output);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(done[i]!=1){
                done[i]=1;
                output.push_back(nums[i]);
                permutations(output,nums,done,ans);
                done[i]=0;
                output.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        int done[6]={0};
        vector<int>output;
        permutations(output,nums,done,ans);
        return ans;
    }
};