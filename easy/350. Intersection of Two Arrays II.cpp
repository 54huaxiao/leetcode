class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		map<int, int> temp1, temp2;
		vector<int> temp;
		for (int i : nums1) temp1[i]++;
		for (int i : nums2) temp2[i]++;
		for (int i : nums1) {
			if (temp2[i] != 0) {
				if (temp1[i] > temp2[i]) {
					for (int j = 0; j < temp2[i]; j++) temp.push_back(i);
				}
				else {
					for (int j = 0; j < temp1[i]; j++) temp.push_back(i);
				}
				temp2[i] = 0;
			}
		}
		return temp;
	}
};