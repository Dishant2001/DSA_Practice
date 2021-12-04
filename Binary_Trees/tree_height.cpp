//Finding heights of left and right subtrees and returning the maximum among these.

int height(struct Node* node)
{
    //code here
    int h=0;
    int treeheight(struct Node* node)
    {
        if(node==NULL)
            return -1;
        else
        {
            int lh=treeheight(node->left);
            int rh=treeheight(node->right);
            if(lh>rh)
                return lh+1;
            else return rh+1;
        }
    }
    h=treeheight(node);
    return h+1;
}