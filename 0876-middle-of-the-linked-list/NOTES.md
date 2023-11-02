ListNode* middleNode(ListNode* head) {
        ListNode*f=head;
        ListNode*s=head;
        while(f->next!=NULL ){
            f=f->next;
             s=s->next;
            if(f->next!=NULL)
             f=f->next;
        }
        return s;
     }   ​
