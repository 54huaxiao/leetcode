class Solution {
public:
	string countAndSay(int n) {
		if (n <= 0)
			return NULL;

		//n=1ʱ�����Ϊ"1"
		string ret = "1";
		if (n == 1)
			return ret;
		else
		{
			for (int i = 2; i <= n; i++)
				ret = Count(ret);
		}//else
		return ret;

	}

	string Count(const string &str)
	{
		int size = strlen(str.c_str());
		//������
		stringstream ret;
		//�����ʶ�ַ�
		char flag = str[0];
		//�����ʶ�ַ��ĳ��ִ���
		int count = 0, i = 0;
		while (i < size)
		{
			//��ʱѭ��λ
			int pos = i;
			while (str[pos] == flag)
			{
				count++;
				pos++;
			}//while
			ret << count << flag;
			flag = str[pos];
			count = 0;
			//������һ��ѭ��λ
			i = pos;
		}//for
		return ret.str();
	}
};