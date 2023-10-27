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
    ListNode* deleteMiddle(ListNode* head) {
      if(head->next==NULL) return head->next;
      ListNode* temp=head;
       int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int n=(cnt/2);
        while(n>1){
          temp=temp->next;//2
          n--;
        }
        if(temp->next!=NULL)
        temp->next=temp->next->next;
        return head;
    }
};