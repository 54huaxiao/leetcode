#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		int n = nums.size();
		k = k % n;
		vector<int>::iterator it = nums.begin();
		reverse(nums.begin(), it + n - k);
		for (int i : nums) cout << i << " ";
		cout << endl;
		reverse(it + n - k, nums.end());
		for (int i : nums) cout << i << " ";
		cout << endl;
		reverse(nums.begin(), nums.end());
		for (int i : nums) cout << i << " ";
		cout << endl;
	}
};

int main() {
	vector<int> nums;
	for (int i = 1; i < 8; i++) {
		nums.push_back(i);
	}
	Solution s;
	s.rotate(nums, 3);
	system("pause");
}