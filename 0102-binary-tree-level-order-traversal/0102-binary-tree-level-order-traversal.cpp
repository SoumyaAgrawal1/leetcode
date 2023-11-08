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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
         if(root == NULL) return ans; 
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size1=q.size();
            vector<int>level;
          
            for(int i=0;i<size1;i++){
               TreeNode* frontt=q.front();
                 q.pop();
                if(frontt->left) q.push(frontt->left);
                if(frontt->right) q.push(frontt->right);
                
                level.push_back(frontt->val); 
            }  
            ans.push_back(level);
        }
        return ans;
    }
};