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
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=0;
        if(root==NULL)
            return 0;
        int s=targetSum - root->val;
        if(s==0 && root->left==NULL && root->right==NULL)
            return 1;
        if(root->left)
            ans=ans || hasPathSum(root->left,s);
        if(root->right)
            ans=ans || hasPathSum(root->right,s);
        
        return ans;
    }
};
