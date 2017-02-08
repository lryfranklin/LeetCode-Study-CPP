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
        vector<int> result;
        inorderTraversalDFS(root, result);
        return result;
    }
    void inorderTraversalDFS(TreeNode *root, vector<int> & result){
        if (!root) return;
        inorderTraversalDFS(root->left, result);
        result.push_back(root->val);
        inorderTraversalDFS(root->right, result);
    }
};