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
    bool symmetric(TreeNode* p,TreeNode* q){
        if(p == NULL || q == NULL)
        return p == q;

        bool ans = symmetric(p->right,q->left);
        bool ans2 = symmetric(p->left,q->right);

        return (p->val)==(q->val) && ans && ans2;
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
        return true;
        return symmetric(root->left,root->right);
    }
};