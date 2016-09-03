class Solution {
public:
	bool isIsomorphic(string s, string t) {
		if (s == "" && t == "") return true;
		if (s.length() != t.length()) return false;
		map<char, char> temp;
		set<char> storage;
		for (int i = 0; i < s.length(); i++) {
			if (temp.count(s[i]) > 0) {
				if (temp[s[i]] != t[i]) return false;
			} else {
				if (storage.count(t[i]) > 0) return false;
				else {
					temp.insert(pair<char, char>(s[i], t[i]));
					storage.insert(t[i]);
				}
			}
		}
		return true;
	}
};