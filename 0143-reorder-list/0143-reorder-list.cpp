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
    void reorderList(ListNode* head) {
        vector<int>arr;
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
            cnt++;
        }
        int s=0;
        int e=cnt-1;
        temp=head;
        while(s<=e)
        { temp->val=arr[s];
            temp=temp->next;
            if(e>s)
            {
                temp->val=arr[e];
            temp=temp->next;
            }
        s++;
        e--;
        }
    }
};