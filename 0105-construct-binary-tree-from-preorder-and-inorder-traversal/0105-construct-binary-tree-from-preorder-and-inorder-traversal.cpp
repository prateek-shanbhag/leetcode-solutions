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
    TreeNode* tree(vector<int>& preorder,int ps,int pe,vector<int>& inorder,int is,int ie,unordered_map<int,int>& mp){

        if(ps>pe || is>ie) return NULL;

        TreeNode* root  = new TreeNode(preorder[ps]);

        int ind = mp[root->val];
        int numleft = ind - is;

        root->left  = tree(preorder,ps+1,ps+numleft,inorder,is,ind-1,mp);
        root->right  = tree(preorder,ps+numleft+1,pe,inorder,ind+1,ie,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        int m = preorder.size();
        int n = inorder.size();
        for(int i =0;i<n;i++){
            mp[inorder[i]] = i;
        }

        return tree(preorder,0,m-1,inorder,0,n-1,mp);
    }
};