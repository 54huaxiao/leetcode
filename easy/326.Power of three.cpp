class Solution {
public:
	bool isPowerOfThree(int n) {
		double res = log(n) / log(3);
		return abs(res - rint(res)) < 0.0000000001;
	}
};