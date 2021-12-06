//Get Inorder traversal of tree, and check whether is strictly increasing or not

vector<int>inor;
    void inorder(Node* r)
    {
        if(r!=NULL)
        {
            inorder(r->left);
            inor.push_back(r->data);
            inorder(r->right);
        }
    }
    bool isBST(Node* root) 
    {
        // Your code here
        inor.clear();
        inorder(root);
       int s=inor.size();
       for(int i=0;i<s-1;++i)
       {
           if(inor[i]>=inor[i+1])
            return false;
       }
       return true;
    }