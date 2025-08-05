#include<iostream>
#include<map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<int, int> ms;

	int N;
	cin >> N;
	while (N-- != 0) {
		int x;
		cin >> x;
		ms.insert(x);
	}

	int M;
	cin >> M;
	while (M-- != 0) {
		int y;
		cin >> y;

		cout << ms.count(y) << " ";
	}
}