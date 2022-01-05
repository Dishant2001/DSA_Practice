//O(log(n))
//find target element, start checking that from beginning and end by incrementing start index and decrementing
//end index

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,m;
        vector<int>vec;
        while(i<=j){
            m=i+(j-i)/2;
            if(nums[m]==target){
                if(nums[i]<target)
                    ++i;
                else if(nums[i]==target){
                    if(nums[j]>target)
                        --j;
                    else if(nums[j]==target){
                        vec.push_back(i);
                        vec.push_back(j);
                        return vec;
                    }
                }
                if(nums[j]>target)
                    --j;
            }
            else if(nums[m]>target)
                j=m-1;
            else
                i=m+1;
        }
        vec.push_back(-1);
        vec.push_back(-1);
        return vec;
    }
};