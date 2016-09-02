#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main() {
	string getHint(string secret, string guess);
	cout << getHint("1807", "7810");
	system("pause");
}

class Solution {
public:
	string getHint(string secret, string guess) {
		int bull = 0, cows = 0;
		unordered_map<char, int> tmp;
		unordered_map<char, int> tmp1;
		for (char i : secret) {
			tmp[i]++;
		}
		for (char j : guess) {
			tmp1[j]++;
		}
		for (int i = 0; i < secret.size(); i++) {
			if (secret[i] == guess[i]) bull++;
		}
		unordered_map<char, int>::iterator it;
		int sum = 0;
		for (it = tmp.begin(); it != tmp.end(); it++) {
			sum += min(tmp1[it->first], it->second);
		}
		cows = sum - bull;
		char buff[20];
		sprintf(buff, "%dA%dB", bull, cows);
		return buff;
	}
};