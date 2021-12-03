#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    node *next;
}node;

typedef struct
{
    node *start;
}head;

void insertion(head*t,int ele)
{
    node *p=new node;
    node *q;
    p->data=ele;
    p->next=NULL;
    if(t->start==NULL)
        t->start=p;
    else
    {
        q=t->start;
        while(q->next!=NULL)
            q=q->next;
        q->next=p;
    }
}

void reversing(head*t)
{
    node *p=t->start,*q=NULL,*r;
    while(p!=NULL)
    {
        r=p->next;
        p->next=q;
        q=p;
        p=r;
    }
    t->start=q;
}

void display(head*t)
{
    node*q=t->start;
    while(q!=NULL)
    {
        cout<<q->data<<" ";
        q=q->next;
    }
}

void freeSpace(head*t)
{
    node*q;
    while(t->start!=NULL)
    {
        q=t->start;
        t->start=q->next;
        delete q;
    }
}

int main()
{
    head x;
    x.start=NULL;
    int n,val;
    cout<<"Enter no. of elements to enter in Linked List: ";
    cin>>n;
    cout<<"Start entering values:\n";
    for(int i=0;i<n;++i)
    {
        cin>>val;
        insertion(&x,val);
    }
    cout<<"Original Linked List:\n";
    display(&x);
    reversing(&x);
    cout<<"\nReversed Linked List:\n";
    display(&x);
    freeSpace(&x);
    return 0;
}
