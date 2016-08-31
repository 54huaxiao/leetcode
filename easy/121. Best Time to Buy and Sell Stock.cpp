class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() < 0) return 0;
		int max = 0, min_price = prices[0];
		for (int p : prices) {
			if (p <= min_price) min_price = p;
			max = (p - min_price) > max ? p - min_price : max;
		}
		return max;
	}
};