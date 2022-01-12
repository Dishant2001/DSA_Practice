class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int curr_length=1,max_length=1;
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i+1]==nums[i]+1){
                max_length=max(++curr_length,max_length);
            }
            else if(nums[i+1]==nums[i]){
                max_length=max(curr_length,max_length);
            }
            else
                curr_length=1;
        }
        return max_length;
    }
};