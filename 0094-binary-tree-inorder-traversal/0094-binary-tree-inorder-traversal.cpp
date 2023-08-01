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
    void inorderTraversal(TreeNode * root,vector<int> &p)
    {
        if(root==NULL)
        {
            return;
        }
        inorderTraversal(root->left,p);
        p.push_back(root->val);
        inorderTraversal(root->right,p);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>p;

        inorderTraversal(root,p);
        return p;
    }
};