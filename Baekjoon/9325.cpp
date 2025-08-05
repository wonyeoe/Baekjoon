#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	 
	while (t-- != 0) {
		int total = 0;

		int s, n;
		cin >> s >> n;
		total += s;

		for (int i = 0; i < n; i++) {
			int q, p;
			cin >> q >> p;
			total += q * p;
		}

		cout << total << "\n";
	}
}