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
    int minDepth(TreeNode* root) {
            if(root==nullptr) return 0;
        struct node{
            TreeNode *p;
            int deep;
        };
        queue<node> que;
        que.push((node){root,1});
        while(!que.empty())
        {
            node temp = que.front();
            que.pop();
            
            if(temp.p->left==nullptr && temp.p->right == nullptr)//返回第一个叶子节点的深度 
            return temp.deep;
            
            if(temp.p->left!=nullptr)
            que.push((node){temp.p->left,temp.deep+1});
            
            if(temp.p->right!=nullptr)
            que.push((node){temp.p->right,temp.deep+1});
        }
        return -1;
    }
};
