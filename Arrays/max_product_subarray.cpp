//Maintain both current maximum and current minimum product records.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr_max=nums[0],max_product=nums[0],curr_min=nums[0];
        if(nums.size()==1)
            return nums[0];
        for(int i=1;i<nums.size();++i){
            if(nums[i]<0)
                swap(curr_max,curr_min);
            curr_min=min(curr_min*nums[i],nums[i]);
            curr_max=max(curr_max*nums[i],nums[i]);
            max_product=max(max_product,curr_max);
        }
        return max_product;
    }
};