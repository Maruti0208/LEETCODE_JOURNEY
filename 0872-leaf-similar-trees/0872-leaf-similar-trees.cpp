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
    vector<int> leaf(TreeNode* root1, vector<int> &a){
        if(root1== nullptr ) return{};
        if(root1->left==nullptr && root1->right==nullptr){
            a.push_back(root1->val);
        }
             leaf(root1->left, a);
             leaf(root1->right, a);
        
        return a;

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;
        return  leaf(root1, a)== leaf(root2, b);
    }
};