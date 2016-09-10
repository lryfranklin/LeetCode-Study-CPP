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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return BuildTreePI(preorder, inorder, 0, preorder.size()-1, 0);
    }
    TreeNode* BuildTreePI(vector<int> &preorder, vector<int> &inorder, int in_start, int in_end, int pre_start){
        if (in_start > in_end) return NULL;
        int root_value = preorder[pre_start];
        int i = in_start;
        for ( ; i < in_end ; i ++) if (inorder[i] == root_value) break;
        TreeNode *root_node = new TreeNode(root_value);
        root_node->left = BuildTreePI(preorder, inorder, in_start, i - 1, pre_start + 1);
        root_node->right = BuildTreePI(preorder, inorder, i + 1, in_end, i - in_start + pre_start + 1);
        return root_node;
    }
};