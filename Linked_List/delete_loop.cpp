//First detect loop and note point of intersection
//Set one pointer to head, and keep other at point of intersection
//Increment both the pointers by 1 until they meet again.
//The second pointer keeps on moving in the loop itself, hence the point next to the point of intersection of
//both pointers give the end of linked list which is then set to NULL

void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *p,*q;
        p=head;
        q=head;
        while(p!=NULL&&p->next!=NULL)
        {
            p=p->next->next;
            q=q->next;
            if(p==q)
            {
                break;
            }
        }
        if(q==head)
        {
            while(q->next!=p)
            {
                q=q->next;
            }
            q->next=NULL;
        }
        else if(p==q)
        {
            p=head;
            while(p->next!=q->next)
            {
                p=p->next;
                q=q->next;
            }
            q->next=NULL;
        }
    }