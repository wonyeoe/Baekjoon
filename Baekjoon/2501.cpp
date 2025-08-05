#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			v.push_back(i);
		}
	}

	int s = v.size();
	if (k > s) {
		cout << 0;
	}
	else {
		cout << v[k - 1];
	}
}