class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows <= 1)
			return s;

		string result = "";

		//row表示行，j表示s下标，k表示result下标
		int step = 2 * (numRows - 1);
		for (int row = 0; row<numRows; row++)
		{
			for (int j = row; j<s.length();j += step) {
				result += s[j];
				if (row == 0 || row == numRows - 1)
					continue;

				//如果不是第一行或者最后一行，则还有一个斜线上的数据
				int slash = j + step - 2 * row;
				if (slash < s.length())
					result += s[slash];
			}
		}
		return result;
	}
};