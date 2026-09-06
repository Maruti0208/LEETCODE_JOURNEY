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
    void dfs(TreeNode* root,TreeNode*& ans){
        if(!root) return ;
        dfs(root->left, ans);
        ans->right =root;
          root->left = nullptr;
        ans=ans->right;
        dfs(root->right, ans);




    }
    TreeNode* increasingBST(TreeNode* root) {
    TreeNode* ans= new TreeNode();
       TreeNode*   dummy=ans;

        dfs(root, ans);

        return dummy->right;
        
    }
};