//Detect loop in a linked list
//2 pointers with different jumps are used
//If they meet again then loop is possible

bool detectLoop(Node* head)
    {
        // your code here
        Node *p,*q;
        p=head;
        q=head;
        while(q!=NULL&&q->next!=NULL)
        {
            p=p->next;
            q=q->next->next;
            if(p==q)
                return true;
        }
        return false;
    }