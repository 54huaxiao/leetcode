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
	bool isBalanced(TreeNode* root) {
		if (root == NULL) return true;
		else {
			int left_h = treeHeight(root->left);
			int right_h = treeHeight(root->right);
			if (left_h < 0 || right_h < 0 || abs(left_h - right_h) > 1) return false;
			else return true;
		}
	}
private:
	int treeHeight(TreeNode* root) {
		if (root == NULL) return 0;
		int left_h = treeHeight(root->left);
		int right_h = treeHeight(root->right);
		if (left_h < 0 || right_h < 0 || abs(left_h - right_h) > 1) return -1;
		else return max(left_h, right_h) + 1;
	}
};