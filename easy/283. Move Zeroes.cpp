class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		vector<int> temp(nums);
		int count = 0;
		for (int i : nums) {
			if (i != 0) {
				temp[count] = i;
				count++;
			}
		}
		for (int i = count; i < nums.size(); i++)
			temp[i] = 0;
		nums = temp;
	}
};