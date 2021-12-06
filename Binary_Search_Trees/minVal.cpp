int minValue(struct Node *root) {
    // your code here
    if(root->left==NULL)
        return root->data;
    else return minValue(root->left);
}