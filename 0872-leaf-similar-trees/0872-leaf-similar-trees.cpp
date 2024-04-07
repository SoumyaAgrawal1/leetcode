/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traversal1(TreeNode* &root1,vector<int>&ans1){
        if(!root1) return;
        traversal1(root1->left,ans1);
        traversal1(root1->right,ans1);
        if(!root1->left && !root1->right) ans1.push_back(root1->val);
    }
     void traversal2(TreeNode* &root2,vector<int>&ans2){
        if(!root2) return;
        traversal2(root2->left,ans2);
        traversal2(root2->right,ans2);
        if(!root2->left && !root2->right) ans2.push_back(root2->val);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int>ans2;
        traversal1(root1,ans1);
        traversal2(root2,ans2);
        if(ans1.size()!=ans2.size())
            return 0;
        int n=ans1.size();
        for(int i=0;i<n;i++){
            if(ans1[i]!=ans2[i])
                return 0;
        }
        return 1;
        
    }
};