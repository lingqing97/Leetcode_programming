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
    vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int> > ret;
     if(!root) return ret;
     queue<TreeNode*> q;
     q.push(root);
     dfs(ret,q);
     return ret;
    }
private:
    void dfs(vector<vector<int> >& ret,queue<TreeNode*> q)
    {
        if(q.empty()) return;
        queue<TreeNode*> temp;
        vector<int> v;
        while(!q.empty())
        {
            TreeNode* t=q.front();
            temp.push(t);
            v.push_back(t->val);
            q.pop();
        }
        ret.push_back(v);
        while(!temp.empty())
        {
            TreeNode* t=temp.front();
            temp.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
        dfs(ret,q);
    }
};
