#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		v.push_back(m);
	}

	sort(v.begin(), v.end());
	for (int a : v) {
		cout << a << "\n";
	}
}