#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, int>> v;

	int n;
	cin >> n;

	while (n-- != 0) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), comp);

	for (auto p : v) {
		cout << p.first << " " << p.second << "\n";
	}
}
