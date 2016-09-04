#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s) {
	string re = "";
	int space = 0;
	while (s[s.length() - 1] == ' ') s.erase(s.end()-1);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') re += s[i];
		else {
			re = "";
			space++;
		}
	}
	if (space == 0) return s.length();
	else return re.length();
}
int main() {
	cout << lengthOfLastWord("a ") << endl;
	system("pause");
}