class Solution {
public:
	static bool compare(const pair<int, int>& a, const pair<int, int>& b) {
		if (a.first == b.first) return a.second < b.second;
		return a.first > b.first;
	}
	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
		vector<pair<int, int>> ret;
		if (people.size() == 0) return ret;
		sort(people.begin(), people.end(), compare);
		for (int i = 0; i < people.size(); i++) {
			ret.insert(ret.begin() + people[i].second, people[i]);
		}
		return ret;
	}
};