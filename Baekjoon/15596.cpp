#include<iostream>
#include<vector>
using namespace std;

long long sum(vector<int>& a) {
	long long total = 0;
	for (int i = 0; i < a.size(); i++) {
		total += a[i];
	}
	return total;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v[i] = a;
	}

	cout << sum(v);
}