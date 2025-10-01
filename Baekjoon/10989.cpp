#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(10001);

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		v[num]++;
	}

	for (int j = 1; j <= 10000; j++) {
		for (int k = 0; k < v[j]; k++) {
			cout << j << "\n";
		}
	}

}