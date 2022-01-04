//O(n)
//Checking for unique elements in increasing order, and incrementing length of required array with removed //duplicates

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,l=nums.size(),length=1,index=1,curr;
        if(l==0)
            return 0;
        curr=nums[0];
        for(i=1;i<l;++i){
            if(curr!=nums[i]){
                ++length;
                curr=nums[i];
                nums[index]=nums[i];
                ++index;
            }
        }
        return length;
    }
};