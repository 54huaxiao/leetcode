#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int compareVersion(string version1, string version2) {
		int ver1, ver2;
		if (version1.empty() && version2.empty())
			return 0;
		size_t pos1 = version1.find(".");
		if (version1.empty()) {
			ver1 = 0;
		}
		else {
			if (pos1 == string::npos) {
				pos1 = version1.length();
			}
			ver1 = atoi(version1.substr(0, pos1).c_str());
		}
		size_t pos2 = version2.find(".");
		if (version2.empty()) {
			ver2 = 0;
		}
		else {
			if (pos2 == string::npos) {
				pos2 = version2.length();
			}
			ver2 = atoi(version2.substr(0, pos2).c_str());
		}
		if (ver1 > ver2)
			return 1;
		else if (ver1 < ver2)
			return -1;
		else
			return compareVersion(pos1 == version1.length() ? "" : version1.substr(pos1 + 1), pos2 == version2.length() ? "" : version2.substr(pos2 + 1));
	}
};
int main() {
	Solution s;
	int i = s.compareVersion("1", "1");
	cout << i;
	system("pause");
}