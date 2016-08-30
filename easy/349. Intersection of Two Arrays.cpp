class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> temp;
		int n1 = nums1.size(), n2 = nums2.size();
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < n2; j++) {
				if (nums1[i] == nums2[j]) {
					if (find(temp.begin(), temp.end(), nums1[1]) == temp.end())
					temp.push_back(nums1[i]);
				}
			}
		}
		return temp;
	}
};