//Use Queue to store current node and it's left and right children
//Print data according to queue order

vector<int> levelOrder(Node* node)
    {
      //Your code here
      Node *queue[100001];
      vector<int>traversal;
      int f=0,r=-1;
      queue[++r]=node;
      while(f!=(r+1))
      {
          if(queue[f]->left!=NULL)
            queue[++r]=queue[f]->left;
          if(queue[f]->right!=NULL)    
            queue[++r]=queue[f]->right;
          traversal.push_back(queue[f]->data);
          ++f;
      }
      return traversal;
    }