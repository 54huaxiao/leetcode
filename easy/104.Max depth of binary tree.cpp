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
	int maxDepth(TreeNode* root) {
		int l_depth = 0, r_depth = 0;
		if (root == NULL) return 0;
		if (root->left == NULL && root->right == NULL) return 1;
		int l_depth = maxDepth(root->left);
		int r_depth = maxDepth(root->right);
		return l_depth > r_depth ? l_depth+1 : r_depth+1;
	}
};