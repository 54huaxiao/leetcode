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
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> vs;
		if (root == NULL) return vs;
		if (root->left == NULL && root->right == NULL) {
			char buff[124];
			sprintf(buff, "%d", root->val);
			vs.push_back(buff);
			return vs;
		}
		if (root->left) {
			vector<string> lefts = binaryTreePaths(root->left);
			for (int i = 0; i < lefts.size(); i++) {
				char *buff = new char[lefts[i].size() + 56];
				sprintf(buff, "%d->%s", root->val, lefts[i].c_str());
				vs.push_back(buff);
				delete[] buff;
			}
		}
		if (root->right) {
			vector<string> rights = binaryTreePaths(root->right);
			for (int i = 0; i < rights.size(); i++) {
				char *buff = new char[rights[i].size() + 56];
				sprintf(buff, "%d->%s", root->val, rights[i].c_str());
				vs.push_back(buff);
				delete[] buff;
			}
		}
		return vs;
	}
};