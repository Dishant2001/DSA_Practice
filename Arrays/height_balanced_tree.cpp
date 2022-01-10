//Given sorted array, construct height balanced tree.

class Solution {
public:
    
    TreeNode* construct(int l,int h,vector<int>&nums){
        if(l<=h){
            int m=l+(h-l)/2;
            TreeNode*n=new TreeNode(nums[m]);
            n->left=construct(l,m-1,nums);
            n->right=construct(m+1,h,nums);
            return n;
        }
        return nullptr;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return construct(0,nums.size()-1,nums);
    }
};