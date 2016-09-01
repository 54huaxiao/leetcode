class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> result;
		vector<int> tmp;
		result.push_back(1);
		if (rowIndex <= 0)
			return result;

		for (int i = 1; i <= rowIndex; i++)
		{
			tmp = result;
			result.clear();
			result.push_back(1);
			for (int i = 0; i<tmp.size() - 1; i++)
			{
				result.push_back(tmp[i] + tmp[i + 1]);
			}
			result.push_back(1);

		}
		return result;
	}
};