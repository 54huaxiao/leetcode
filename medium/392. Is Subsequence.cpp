#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
	bool isSubsequence(string s, string t) {
		int s_num = s.size(), t_num = t.size();
		if (s_num == 0) return true;
		int index = 0;
		for (int i = 0; i < s_num; i++) {
			while (index < t_num && t[index] != s[i]) index++;
			if (index >= t_num) return false;
			index++;
		}
		return true;
	}
};
int main() {
	Solution s;
	cout << s.isSubsequence("leeeeetcode", "yyyyylyyyyyyyyyyyyyyyyeyyyyyyyyyeyyyyyeyyyyyeyyyyyyeyyytyyyyyyycyoyyyyyydyyyyyyeyyyyyyyyyyyyyyyyyy");
	system("pause");
}