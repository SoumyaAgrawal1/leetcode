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
    bool validtree(TreeNode* root,long min,long max){
        if(root==NULL)
            return 1;
        //min<root->val<max
        if(root->val>min and root->val<max){
            bool left=validtree(root->left,min,root->val);
             bool right=validtree(root->right,root->val,max);
            return left && right;
        }
        return 0;
    }
    bool isValidBST(TreeNode* root) {
        bool ans=false;
        ans=validtree(root,LONG_MIN,LONG_MAX);
        return ans;
    }
};