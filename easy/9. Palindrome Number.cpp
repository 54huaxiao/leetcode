class Solution {
public:
	bool isPalindrome(int x) {
		string s = "";
		int tmp = x;
		if (x < 0) return false;
		while (x) {
			s += ((x % 10) + '0');
			x /= 10;
		}
		int res = 0;
		for (int i = 0; i < s.size(); i++) {
			res += (s[i] - '0') * pow(10, (s.size() - 1 - i));
		}
		return tmp == res;
	}
};