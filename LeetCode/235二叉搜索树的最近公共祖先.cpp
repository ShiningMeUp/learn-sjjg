/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//二叉搜索树的中序遍历是升序的123456789... 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root->val < p->val && root->val < q->val)
        {
           return lowestCommonAncestor(root->right,p,q);
        }
          if(root->val > p->val && root->val > q->val)
        {
           return lowestCommonAncestor(root->left,p,q);
        }
        return root;
    }
};
