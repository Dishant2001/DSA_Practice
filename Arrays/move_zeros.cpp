class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,index=0,count=0,l=nums.size();
        for(i=0;i<l;++i){
            if(nums[i]!=0){
                nums[index]=nums[i];
                ++index;
            }
            else
                ++count;
        }
        for(i=l-count;i<l;++i){
            nums[i]=0;
        }
    }
};