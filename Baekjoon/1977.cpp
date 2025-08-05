#include<iostream>
#include<vector>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int total = 0;
	vector<int> v;

	for (int i = m; i <= n; i++) {
		bool s = false;
		for (int j = 1; j <= 100; j++) {
			if (j * j == i) {
				s = true;
				break;
			}
		}
		if (s == true) {
			total += i;
			v.push_back(i);
		}
	}

	if (v.size() == 0) {
		cout << -1;
	}
	else {
		cout << total << "\n" << v[0];
	}
}