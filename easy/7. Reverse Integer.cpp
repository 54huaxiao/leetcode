#include<stack>
#include<cmath>
using std::stack;
class Solution {
public:
	int reverse(int x) {
		// Start typing your C/C++ solution below
		// DO NOT write int main() function

		long long res = 0;
		if (x >= 1534236469 || x <= -1563847412 && x != -2147483412) return 0;
		while (x)
		{
			res = res * 10 + x % 10;
			x /= 10;
		}
		return int(res);
	}
};