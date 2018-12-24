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
    vector<vector<int>> ret;
    void dfs(vector<TreeNode*> v,bool isEven)
    {
    vector<int> temp;
    vector<TreeNode*> v_child;
    if(!isEven)
        for(int i=v.size()-1;i>=0;i--)
        {
            temp.push_back(v[i]->val);
        }
    else
    {
        for(int i=0;i<v.size();i++)
            temp.push_back(v[i]->val);
    }
    if(temp.size())
        ret.push_back(temp);
    for(TreeNode* x:v)
    {
        if(x->left) v_child.push_back(x->left);
        if(x->right) v_child.push_back(x->right);
    }
     if(v_child.size())
         dfs(v_child,!isEven);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return ret;
        vector<TreeNode*> v;
        v.push_back(root);
        dfs(v,true);
        return ret;
    }
};
