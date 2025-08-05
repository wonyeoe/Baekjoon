#include<iostream>
using namespace std;

int main() {
	int total = 0;
	int n;
	cin >> n;
	string num;
	cin >> num;
	for (int i = 0; i < num.length(); i++) {
		total += num[i] - '0';
	}
	cout << total;
}