#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	bool isPalindrome(string s) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (string::iterator it = s.begin(); it != s.end();) {
			if (!(*it >= 'a' && *it <= 'z') && !(*it >= '0' && *it <= '9')) s.erase(it);
			else it++;
		}
		string s1 = s;
		reverse(s1.begin(), s1.end());
		return s1 == s;
	}
};
int main() {
	Solution s;
	cout << s.isPalindrome("A man, a plan, a canal: Panama");
	system("pause");
}