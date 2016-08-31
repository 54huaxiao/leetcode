class Solution {
public:
	int climbStairs(int n) {
		int n1 = 1, n2 = 2, nf;
		if (n == 1) {
			return n1;
		}
		if (n == 2) {
			return n2;
		}
		for (int i = 3; i <= n; i++) {
			nf = n1 + n2;
			n1 = n2;
			n2 = nf;
		}
		return nf;
	}
};