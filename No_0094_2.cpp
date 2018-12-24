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
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ret;
    stack<TreeNode*> que;
    TreeNode* curr=root;
    while((!que.empty())||curr!=nullptr)
    {
        while(curr)
        {
            que.push(curr);  
            curr=curr->left;
        }
        curr=que.top();
        que.pop();
        ret.push_back(curr->val);
        curr=curr->right;
    }
    return ret;
    }

};
