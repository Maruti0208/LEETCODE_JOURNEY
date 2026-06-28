/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *t = root, *t1 = root;
        vector<TreeNode*> a, a1;
        while (true) {
            if (t == p) {
                a.push_back(t);
                break;
            }
            a.push_back(t);
            if (p->val > t->val) {
                t = t->right;
            } else
                t = t->left;
        }
        while (true) {
            if (t1 == q) {
                a1.push_back(t1);
                break;
            }
            a1.push_back(t1);
            if (q->val > t1->val) {
                t1 = t1->right;
            } else
                t1 = t1->left;
        }
        int i = 0;
        while (i < a.size() && i < a1.size() && a[i] == a1[i])
            i++;

        return a[i - 1];
    }
}

;