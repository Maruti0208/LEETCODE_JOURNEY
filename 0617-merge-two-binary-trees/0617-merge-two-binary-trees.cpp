/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* dfs(TreeNode*& r, TreeNode*& t) {
        if (!r)
            return t;
        if (!t)
            return r;
        r->val += t->val;
        r->left = dfs(r->left, t->left) ;
        r->right = dfs(r->right, t->right);
        return r;
    }
    TreeNode* mergeTrees(TreeNode* r, TreeNode* t) {
        if(!r && t) return t; 
        dfs(r, t);
        return r;
    }
};