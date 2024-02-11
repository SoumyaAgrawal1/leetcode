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
    bool check(TreeNode* root, TreeNode* subRoot)
    {
        if(root==NULL and subRoot==NULL) return 1;
        if(root!=NULL and subRoot==NULL) return 0;
        if(root==NULL and subRoot!=NULL) return 0;
return root->val==subRoot->val and check(root->left,subRoot->left) and check(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return 0;
        if(root->val==subRoot->val){
             if(check(root,subRoot))
                   return 1;
        }
       return  isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
       
        
    }
};