//3 possibilities
//Node to be delete is:
//1. Leaf Node(root node or not a root)
//2. Has left
//3. Has only right(root node or not a root)

TreeNode* father(TreeNode* root, TreeNode* q){
        TreeNode* p=root;
        while(p!=NULL)
        {
            if(p->left==q||p->right==q)
                return p;
            if(q->val<=p->val)
                p=p->left;
            else p=p->right;
        }
        return NULL;
    }
    
    TreeNode* maximumNode(TreeNode*node){
        if(node->right==NULL)
            return node;
        else return maximumNode(node->right);
    }
    
    TreeNode* minimumNode(TreeNode*node){
        if(node->left==NULL)
            return node;
        else return minimumNode(node->left);
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode *q=root,*f;
        while(q!=NULL)
        {
            if(q->val==key)
                break;
            if(key<q->val)
                q=q->left;
            else q=q->right;
        }
        if(q==NULL)
            return root;
        if(q->left==NULL&&q->right==NULL)
        {
            if(q==root)
            {
                root=NULL;
                return root;
            }
            f=father(root,q);
            if(f->left==q)
                f->left=NULL;
            else f->right=NULL;
            return root;
        }
        if(q->left!=NULL)
        {
            TreeNode* max= maximumNode(q->left);
            int val=max->val;
            deleteNode(root,max->val);
            q->val=val;
            return root;
        }
        if(q->left==NULL&&q->right!=NULL)
        {
            TreeNode* min=minimumNode(q->right);
            int val=min->val;
            deleteNode(root,min->val);
            q->val=val;
            return root;
        }
        return root;
    }