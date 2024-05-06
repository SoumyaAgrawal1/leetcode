/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        ListNode* odd=new ListNode(-1);
        ListNode* oddtemp=odd;
        ListNode* even=new ListNode(-1);
        ListNode* eventemp=even;
        int ind=0;
        while(temp!=NULL){
            if(ind%2!=0){
                even->next=temp;
                temp=temp->next;
                even=even->next;
            }     
        else{
                odd->next=temp;
                temp=temp->next;
                odd=odd->next;
        }   
            ind++;
    }
        even->next=NULL;
    //if(eventemp->next!=NULL)
          odd->next=eventemp->next;
    return oddtemp->next;
    }
        
};