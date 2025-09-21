#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[21] = { 0 };

	int m;
	cin >> m;
	while (m-- != 0) {
		string cmd;
		cin >> cmd;

		if (cmd == "add") {
			int x;
			cin >> x;

			if (arr[x] == 0) {
				arr[x] = 1;
			}
		}
		else if (cmd == "remove") {
			int x;
			cin >> x;

			if (arr[x] == 1) {
				arr[x] = 0;
			}
		}
		else if (cmd == "check") {
			int x; 
			cin >> x;

			if (arr[x] == 1) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (cmd == "toggle") {
			int x;
			cin >> x;

			if (arr[x] == 1) {
				arr[x] = 0;
			}
			else {
				arr[x] = 1;
			}
		}
		else if (cmd == "all") {
			for (int i = 1; i <= 20; i++) {
				arr[i] = 1;
			}
		}
		else if (cmd == "empty") {
			for (int i = 1; i <= 20; i++) {
				arr[i] = 0;
			}
		}
	}
}