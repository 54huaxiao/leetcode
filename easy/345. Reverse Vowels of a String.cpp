class Solution {
public:
	string reverseVowels(string s) {
		if (s.length() == 0) return "";
		int left = 0, right = s.length() - 1;
		set<char> hash{ 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
		while (left < right) {
			if (hash.count(s[left]) == 0) left++;
			if (hash.count(s[right]) == 0) right--;
			if (hash.count(s[left]) != 0 && hash.count(s[right]) != 0) {
				swap(s[left], s[right]);
				left++, right--;
			}
		}
		return s;
	}
};