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
    void reversee(vector<int>&arr,int s,int e){
        while(s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        if(head==NULL) return NULL;
        int len=0;
         vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        k=k%n;
        reversee(arr,0,n-1);
        reversee(arr,0,k-1);
        reversee(arr,k,n-1);
        // for(int i=0;i<n;i++)
        //     cout<<arr[i]<<" ";
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=arr[i];
            temp=temp->next;
            i=i+1;
        }
        return head;   
    }
};