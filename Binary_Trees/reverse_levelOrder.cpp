//Use queue, but push right child first, then left child;
//Reverse the traversal vector obtained

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    Node *queue[10001];
    int f=0,r=-1;
    vector<int>traversal;
    queue[++r]=root;
    while(f!=(r+1))
    {
        if(queue[f]->right!=NULL)
            queue[++r]=queue[f]->right;
        if(queue[f]->left!=NULL)
            queue[++r]=queue[f]->left;
        traversal.push_back(queue[f]->data);
        ++f;
    }
    int temp,l=traversal.size();
    for(int i=0;i<l/2;++i)
    {
        temp=traversal[i];
        traversal[i]=traversal[l-i-1];
        traversal[l-i-1]=temp;
    }
    return traversal;
}