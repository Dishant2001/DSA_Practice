//Reverse linked list in a segment of size k
//Pass end of current segment as head of following segment recursively

struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *p=head,*q=NULL,*r=NULL;
        int i=0;
        while(p!=NULL&&i<k)
        {
            r=p->next;
            p->next=q;
            q=p;
            p=r;
            ++i;
        }
        if(r!=NULL)
            head->next=reverse(r,k);
        return q;
    }