class Solution {
public:
	string addBinary(string a, string b) {
		string result = "";
		int c = 0;
		int i = a.size() - 1;
		int j = b.size() - 1;
		while (i >= 0 || j >= 0 || c == 1) {
			c += (i >= 0 ? a[i--]-'0' : 0);
			c += (j >= 0 ? b[j--]-'0' : 0);
			result = char(c % 2 + '0') + result;
			c /= 2;
		}
		return result;
	}
};