class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows <= 1)
			return s;

		string result = "";

		//row��ʾ�У�j��ʾs�±꣬k��ʾresult�±�
		int step = 2 * (numRows - 1);
		for (int row = 0; row<numRows; row++)
		{
			for (int j = row; j<s.length();j += step) {
				result += s[j];
				if (row == 0 || row == numRows - 1)
					continue;

				//������ǵ�һ�л������һ�У�����һ��б���ϵ�����
				int slash = j + step - 2 * row;
				if (slash < s.length())
					result += s[slash];
			}
		}
		return result;
	}
};