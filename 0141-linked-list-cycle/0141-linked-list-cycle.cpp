/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,bool>vis;
        ListNode *temp=head;
        while(temp!=NULL){
            if(vis[temp]==true)//already visited hai
             {return true;}
            vis[temp]=true;
            temp=temp->next;  
        }
        return false;
    }
};