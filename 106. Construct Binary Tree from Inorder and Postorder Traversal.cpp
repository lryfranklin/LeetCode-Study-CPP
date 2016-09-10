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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return BuildTreePI(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }
    TreeNode *BuildTreePI(vector<int> &inorder, vector<int> &postorder, int in_start, int in_end, int post_start, int post_end){
        if (in_start > in_end) return NULL;
        int root_value = postorder[post_end];
        int i = in_start;
        for ( ; i < in_end ; i ++) if (inorder[i] == root_value) break;
        TreeNode *root_node = new TreeNode(root_value);
        root_node->left = BuildTreePI(inorder, postorder, in_start, i-1, post_start, post_start+i-in_start-1);
        root_node->right = BuildTreePI(inorder, postorder, i+1, in_end, post_start+i-in_start, post_end-1);
        return root_node;
    }
};