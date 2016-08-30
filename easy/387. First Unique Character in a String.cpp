class Solution {
public:
	int firstUniqChar(string s) {
		map<char, int> temp;
		for (char c : s) temp[c]++;
		for (int i = 0; i < s.length(); i++) {
			if (temp[s[i]] == 0) return i;
			else return -1;
		}
	}
};