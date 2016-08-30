class Solution {
public:
	int romanToInt(string s) {
		char char_arr[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
		int int_arr[] = { 1, 5, 10, 50, 100, 500, 1000 };
		int sum = 0;
		int map_len = sizeof(char_arr) / sizeof(char);
		map<char, int> temp;
		for (int i = 0; i < map_len; i++) {
			temp.insert(pair<char, int>(char_arr[i], int_arr[i]));
		}
		for (int i = 0; i < s.length() - 1; i++) {
			if (temp[s[i]] >= temp[s[i + 1]]) {
				sum += temp[s[i]];
			} else {
				sum -= temp[s[i]];
			}
		}
		sum += temp[s[s.length() - 1]];
		return sum;
	}
};