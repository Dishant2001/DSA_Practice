// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
if(root==NULL)
return;
findPreSuc(root->left,pre,suc,key);
if(root->key<key)
pre=root;
if(root->key>key&&suc==NULL)
suc=root;
findPreSuc(root->right,pre,suc,key);

}