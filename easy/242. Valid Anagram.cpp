class Solution {
public:
	bool isAnagram(string s, string t) {
		map<char, int> temp;
		if (s.length() != t.length()) return false;
		for (char c : s) temp[c]++;
		for (char c : t) {
			if (temp[c] == 0) return false;
			else {
				temp[c]--;
			}
		}
		return true;
	}
};