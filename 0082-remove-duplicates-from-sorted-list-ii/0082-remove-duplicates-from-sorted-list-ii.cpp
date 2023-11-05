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
    ListNode* deleteDuplicates(ListNode* head) {
//unordered_map use krne se unsorted aa raha aur map use krne se sorted array ke form ma aayega
        if(head==NULL) return NULL;
        ListNode* temp=head;
        map<int,int>mp;
        while(temp!=NULL){
             mp[temp->val]++;
              temp=temp->next;  
            }
        ListNode* ans=new ListNode(1);
        ListNode* root=ans;
        for(auto i:mp){
            if(i.second==1){
                ans->next=new ListNode(i.first);
                ans=ans->next;
            }
        }
        ans->next=NULL;
        return root->next;
    }
};