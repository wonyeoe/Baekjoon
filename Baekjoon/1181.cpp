#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(string s1, string s2) {
	if (s1.length() == s2.length()) {
		return s1 < s2;
	}
	return s1.length() < s2.length();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		v.push_back(s);
	}

	sort(v.begin(), v.end(), comp);


	for (int i = 0; i < n; i++) {
		if (i >= 1 && v[i] == v[i - 1]) {
			continue;
		}
		cout << v[i] << "\n";
	}

}