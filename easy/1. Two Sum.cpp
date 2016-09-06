class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res(2, -1);
		map<int, int> m;
		for (int i = 0; i < nums.size(); i++) {
			if (m.find(target-nums[i]) == m.end()) m[nums[i]] = i;
			else {
				res[0] = m[target - nums[i]];
				res[1] = i;
				return res;
			}
		}
	}
};