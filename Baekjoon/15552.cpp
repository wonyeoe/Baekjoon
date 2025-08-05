#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n-- != 0) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
}