#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string reverseString(string s) {
		string temp = "";
		for (int i = s.length() - 1; i >= 0; i--) {
			temp += s[i];
		}
		return temp;
	}
};