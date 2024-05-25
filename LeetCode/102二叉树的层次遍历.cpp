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
    struct node{
        TreeNode *p;
        int deep;
    };
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==nullptr) return res;
        queue<node> que;
        que.push((node){root,0});
        int last=0;
        vector<int> t;
        while(!que.empty())
        {
            node temp= que.front();
            que.pop();
            if(temp.deep!=last)
            {
                res.push_back(t);
                t.clear();
                last=temp.deep;
            }
            t.push_back(temp.p->val);
            if(temp.p->left!=nullptr)
            {
                que.push((node){temp.p->left,temp.deep+1});
            }
            if(temp.p->right!=nullptr)
                que.push((node){temp.p->right,temp.deep+1});
            
        }
        res.push_back(t);//最后一层手动入队列 
        
        
        return res;
    }
};
