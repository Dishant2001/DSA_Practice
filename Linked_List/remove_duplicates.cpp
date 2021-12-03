//Linked list is in sorted order
//Remove duplicate values
//Eg. 2->2->2->4->5->6 becomes 2->4->5->6

void removeDuplicates(struct Node* head)
{
    struct Node *p;
    p=head;
    while(p->next!=NULL)
    {
        if(p->data==p->next->data)
        {
            p->next=p->next->next;
        }
        else
            p=p->next;
    }