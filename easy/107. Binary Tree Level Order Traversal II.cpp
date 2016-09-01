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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> result;
		queue<TreeNode*> vec;
		if (!root) return result;
		vec.push(root);
		while (vec.size() > 0) {
			queue<TreeNode*> tmp_vec;
			vector<int> tmp_result;
			while (vec.size() > 0) {
				TreeNode* node = vec.front();
				vec.pop();
				if (node->left) tmp_vec.push(node->left);
				if (node->right) tmp_vec.push(node->right);
				tmp_result.push_back(node->val);
			}
			vec = tmp_vec;
			result.push_back(tmp_result);
		}
		reverse(result.begin(), result.end());
		return result;
	}
};