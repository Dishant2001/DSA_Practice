/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* construct(vector<int>&p,vector<int>&in,int i,int j,int&num){
        if(j<i)
            return nullptr;
        TreeNode* root= new TreeNode(p[num++]);
        int k=find(begin(in),end(in),root->val)-begin(in);
        root->left=construct(p,in,i,k-1,num);
        root->right=construct(p,in,k+1,j,num);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx=0,n=preorder.size();
        return construct(preorder,inorder,0,n-1,idx);
    }
};