class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		map<char, int> temp;
		for (char s : magazine) temp[s]++;
		for (char s : ransomNote) {
			if (temp[s] == 0) return false;
			else {
				temp[s]--;
			}
		}
		return true;
	}
};