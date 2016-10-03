class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int ret = 0;
		if (prices.size() == 0) return ret;
		int buy = prices[0];
		int last = prices[0];
		for (int i = 1; i < prices.size(); i++) {
			if (prices[i] < last) {
				ret += (last - buy);
				buy = prices[i];
			}
			last = prices[i];
		}
		ret += (last - buy);
		return ret;
	}
};