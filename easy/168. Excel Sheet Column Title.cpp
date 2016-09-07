#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string convertToTitle(int n) {
		string res = "";
		while (n) {
			res = (char)((n - 1) % 26 + 'A') + res;
			n = (n - 1) / 26;
		}
		return res;
	}
};

int main() {
	Solution s;
	cout << s.convertToTitle(27*26) << endl;
	system("pause");
}