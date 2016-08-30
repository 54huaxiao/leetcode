class Solution {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> temp;
		for (int i : nums) temp[i]++;
		int big = 0, flag;
		for (int i = 0; i < nums.size(); i++) {
			if (temp[nums[i]] >= big) {
				big = temp[nums[i]];
				flag = nums[i];
			}
		}
		return flag;
	}
};