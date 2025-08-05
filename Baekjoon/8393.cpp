#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int total = n;
	while (n-- != 0) {
		total += n;
	}
	cout << total;
}