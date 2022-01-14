class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0,index,n=nums.size();
        //swap sorting
        while(i<n){
            index=nums[i]-1;//array from [1,n] should have i+1 at ith index
            if(nums[i]!=nums[index])
                swap(nums[i],nums[index]);
            else
                ++i;
        }
        return nums[n-1];//repeated integer rearranged to the last
    }
};