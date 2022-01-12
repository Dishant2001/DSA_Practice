class Solution {
public:
    void construct(int n,int idx,vector<int>&nums,vector<int>&temp,vector<vector<int>>&powerset){
        powerset.push_back(temp);
        if(temp.size()==n)
            return;
        for(int i=idx;i<n;++i){
            temp.push_back(nums[i]);
            construct(n,i+1,nums,temp,powerset);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>powerset;
        vector<int>temp;
        int n=nums.size();
        construct(n,0,nums,temp,powerset);
        return powerset;
    }
};