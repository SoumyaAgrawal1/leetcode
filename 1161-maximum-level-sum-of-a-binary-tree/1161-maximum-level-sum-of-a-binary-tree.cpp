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
    int maxLevelSum(TreeNode* root) {
        //like level order traversal
        queue<TreeNode*>q;
        vector<int>vec;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int sum=0;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
                sum+=node->val;
            }
            vec.push_back(sum);
        }
        int maxi=*max_element(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            if(vec[i]==maxi) return i+1;
        }
        return -1;
    }
};