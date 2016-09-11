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
    int kthSmallest(TreeNode* root, int k) {
        return kthSmallestInorder(root, k);
    }
    
    int kthSmallestInorder(TreeNode *root, int &k){
        if (!root) return -1;
        int value = kthSmallestInorder(root->left, k);
        if (k == 0) return value;
        if (--k == 0) return root->val;
        return kthSmallestInorder(root->right, k);
    }
};