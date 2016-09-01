class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> result;
		vector<int> tmp1, tmp2, tmp;
		tmp1.push_back(1);
		tmp2.push_back(1);
		tmp2.push_back(1);
		if (numRows == 0) return result;
		if (numRows == 1) {
			result.push_back(tmp1);
			return result;
		}
		if (numRows == 2) {
			result.push_back(tmp1);
			result.push_back(tmp2);
			return result;
		}
		for (int i = 3; i <= numRows; i++) {
			if (i == 3) {
				result.push_back(tmp1);
				result.push_back(tmp2);
			}
			tmp1.clear();
			tmp1.push_back(1);
			for (int j = 0; j < tmp2.size()-1; j++) {
				tmp1.push_back(tmp2[j] + tmp2[j + 1]);
			}
			tmp1.push_back(1);
			tmp2 = tmp1;
			result.push_back(tmp2);
		}
		return result;
	}
};