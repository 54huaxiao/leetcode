class Solution {
public:
	bool isHappy(int n) {
		int sum = 0;
		if (n < 0) return false;
		sum = add(n);
		map<int, bool> temp;
		while (sum != 1) {
			if (temp[sum]) return false;
			temp[sum] = true;
			sum = add(sum);
		}
		return true;
	}
	int add(int n) {
		int result = 0;
		while (n != 0) {
			result += pow(n % 10, 2);
			n /= 10;
		}
		return result;
	}
};