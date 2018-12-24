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
    int size=0;
    void dfs(TreeNode* root,int deep)
    {
        if(!root)
        {
            return;
        }
        deep++;
        if(deep>size) size=deep;
        dfs(root->left,deep);
        dfs(root->right,deep);

    }
    int maxDepth(TreeNode* root) {
       if(!root) return size;
        dfs(root,0);
        return size;
    }
};
