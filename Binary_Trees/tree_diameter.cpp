//Diameter is the length of longest path from one leaf node to other
//First Compare height of subtrees and then sum of height of subtrees
//Largest sum of height of subtrees gives diameter (length of longest path from leaf node to leaf node)

int diameter(struct Node* root) {
    // code here
    int h=0,dia=0;
    int height(struct Node* node)
    {
        if(node==NULL)
            return -1;
        else
        {
            int lh=height(node->left);
            int rh=height(node->right);
            int temp;
            if(lh>rh)
            {
                temp=lh+1;
            }
            else 
            {
                temp=rh+1;
            }
            int ans;
            if(temp>(lh+rh+2))
                ans=temp;
            else ans=(lh+rh+2);
            if(dia<ans)
                dia=ans;
            return temp;
        }
    }
    height(root);
    return dia+1;
}