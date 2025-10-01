#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count = 0;

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		for (auto c : s) {
			if (c == '3' || c == '6' || c == '9') {
				count++;
			}
		}
	}

	cout << count;
}