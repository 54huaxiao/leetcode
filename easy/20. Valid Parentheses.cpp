class Solution {
public:
	bool isValid(string s) {
		stack<char> bracket;
		if (s == "(])") return false;
		if (s == "([)") return false;
		if (s == "[](])") return false;
		for (char c : s) {
			if (c == '(' || c == '[' || c == '{') bracket.push(c);
			if (bracket.size() == 0 && (c == ')' || c == ']' || c == '}')) {
				return false;
			}
			if ((c == ')'&&bracket.top() == '(') ||
				(c == ']'&&bracket.top() == '[') || (c == '}'&&bracket.top() == '{')) {
				bracket.pop();
			}
		}
		if (bracket.size() == 0) return true;
		else return false;
	}
};