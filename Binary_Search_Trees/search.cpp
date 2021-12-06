#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    node *left,*right;
}node;

typedef struct
{
    node *root;
}head;


void insert1(head*t,int ele)
{
    node*p=new node;
    p->data=ele;
    p->left=NULL;
    p->right=NULL;
    if(t->root==NULL)
    {
        t->root=p;
        return;
    }
    node *q=t->root;
    while(q!=NULL)
    {
        if(ele<=q->data)
        {
            if(q->left==NULL)
            {
                q->left=p;
                return;
            }
            else
                q=q->left;
        }
        else
        {
            if(q->right==NULL)
            {
                q->right=p;
                return;
            }
            else
                q=q->right;
        }
    }
    return;
}

void inorder_display(node*r)
{
    if(r==NULL)
        return;
    inorder_display(r->left);
    cout<<r->data<<"\n";
    inorder_display(r->right);
}

bool searching(head*t,int ele)
{
    if(t->root==NULL)
        return false;
    node*q=t->root;
    while(q!=NULL)
    {
        if(q->data==ele)
        {
            return true;
        }
        if(ele<q->data)
            q=q->left;
        else
            q=q->right;
    }
    return false;
}


void freeSpace(node*n)
{
    if(n==NULL)
        return;
    freeSpace(n->left);
    freeSpace(n->right);
    delete n;
}

int main()
{
    head *x;
    x->root=NULL;
    int n,val;
    cout<<"Enter no. of elements to enter in Binary Search Tree: ";
    cin>>n;
    cout<<"Start entering values:\n";
    for(int i=0;i<n;++i)
    {
        cin>>val;
        insert1(x,val);
    }
    cout<<"Inorder Traversal:\n";
    inorder_display(x->root);
    cout<<"Enter element to search: ";
    cin>>val;
    if(searching(x,val))cout<<"Found!";
    else cout<<"Not Found";
    freeSpace(x->root);
    return 0;
}
