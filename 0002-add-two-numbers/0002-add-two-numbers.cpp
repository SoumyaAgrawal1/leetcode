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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        int sum=0,carry=0;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
              sum=sum+carry;
              carry=sum/10;
              sum=sum%10;
              temp->next=new ListNode(sum);
              temp=temp->next;
              sum=0;
        }
        if(carry!=0)
            temp->next=new ListNode(carry);
        return ans->next;
    }
};