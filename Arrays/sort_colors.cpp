//Modified Bubble Sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,ex=1,n=nums.size();
        for(i=0;i<n-1&&ex==1;++i){
            ex=0;
            for(j=0;j<n-1;++j){
                if(nums[j]>nums[j+1]){
                    ex=1;
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    }
};