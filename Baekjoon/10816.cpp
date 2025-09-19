#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<int, int> map;

	int n, m, x, y;

	cin >> n;
	while (n-- != 0) {
		cin >> x;
		map[x]++;
	}

	cin >> m;
	while (m-- != 0) {
		cin >> y;
		cout << map[y] << " ";
	}
}