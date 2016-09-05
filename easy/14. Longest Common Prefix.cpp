class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty()) return "";
		if (strs.size() == 1) return strs[0];
		char c = strs[0][0];
		string ret = "";
		int num = 0;
		while (true) {
			for (vector<string>::size_type i = 0; i < strs.size(); i++) {
				if (num < strs[i].size() && strs[i][num] == c) {
					if (i == strs.size() - 1) {
						ret += c;
						num++;
						c = strs[0][num];
					}
				}
				else {
					return ret;
				}
			}
		}
	}
};