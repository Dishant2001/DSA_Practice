//O(n)
//Kadane's Algo
//calculate sum upto current index, and check if sum is greater or value at index is greater.
//if value at index is greater, set sum till now to value at index, making a fresh start, hence finding subarray
//sum. Store maximum current sum to finally obtain maximum subarray sum in the end.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max=nums[0],global_max=nums[0];
        if(nums.size()==1)
            return nums[0];
        for(int i=1;i<nums.size();++i){
            curr_max=max(curr_max+nums[i],nums[i]);
            global_max=max(curr_max,global_max);
        }
        return global_max;
    }
};