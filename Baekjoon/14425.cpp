#include<iostream>
#include<set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	set<string> set;
	int count = 0;

	int n, m;
	cin >> n >> m;

	while (n-- != 0) {
		string s;
		cin >> s;

		set.insert(s);
	}

	while (m-- != 0) {
		string s;
		cin >> s;

		if (set.find(s) != set.end()) {
			count++;
		}
	}

	cout << count;

}