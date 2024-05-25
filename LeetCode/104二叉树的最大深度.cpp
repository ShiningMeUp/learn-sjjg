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
    int res=0;
    void func(TreeNode *p,int deep)
    {
        if(p == nullptr) return;
        res=max(res,deep);
        func(p->left,deep+1);
        func(p->right,deep+1);
    }
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        func(root,1);
        return res;
    }
};
