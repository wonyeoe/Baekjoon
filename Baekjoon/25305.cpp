#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v;

	while (n-- != 0) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end(), greater<int>());

	cout << v[k - 1];
}