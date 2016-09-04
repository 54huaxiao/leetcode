class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		map<int, int>int_map;
		map<int, int>::iterator iter;
		for (int i = 0; i<nums.size(); i++) {
			if ((iter = int_map.find(nums[i])) != int_map.end()) {
				if (i - iter->second <= k) {
					return true;
				}
				else {
					int_map.erase(iter);
				}
			}
			int_map.insert(pair<int, int>(nums[i], i));
		}
		return false;
	}
};