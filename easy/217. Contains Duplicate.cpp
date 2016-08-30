class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		map<int, int> temp;
		for (int i : nums) temp[i]++;
		for (int i : nums) {
			if (temp[i] >= 2) return true;
		}
		return false;
	}
};