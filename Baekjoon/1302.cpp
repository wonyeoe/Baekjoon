#include<iostream>
#include<map>
using namespace std;

int main() {
	map<string, int> m;

	int n;
	cin >> n;

	while (n-- != 0) {
		string s;
		cin >> s;

		m[s]++;
	}

	string maxS;
	int max = 0;
	for (auto i : m) {
		if (i.second > max) {
			max = i.second;
			maxS = i.first;
		}
	}

	cout << maxS;
}