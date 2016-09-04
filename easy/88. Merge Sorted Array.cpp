#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	vector<int> temp;
	int i = 0, j = 0;
	for (; i < m;) {
		for (; j < n;) {
			if (nums1[i] > nums2[j]) {
				temp.push_back(nums2[j]);
				j++;
			}
			else {
				temp.push_back(nums1[i]);
				i++;
				break;
			}
		}
		if (j == n) break;
	}
	if (j == n) {
		for (; i < m; i++) temp.push_back(nums1[i]);
	}
	if (i == m) {
		for (; j < n; j++) temp.push_back(nums2[j]);
	}
	//cout << temp.size();
	nums1.clear();
	nums1 = temp;
	//cout << " " << nums1.size() << endl;
}
int main() {
	vector<int> nums1, nums2;
	for (int i = 0; i < 10; i++) nums1.push_back(i);
	for (int i = 4; i < 14; i++) nums2.push_back(i);
	merge(nums1, 4, nums2, 5);
	for (int i = 0; i < nums1.size(); i++) {
		cout << nums1[i] << " ";
	}
	system("pause");
}