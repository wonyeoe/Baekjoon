#include<iostream>
#include<queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int> q;

	while (N-- != 0) {
		int x;
		cin >> x;

		if (x != 0) {
			q.push(x);
		}
		else {
			if (q.size() == 0) {
				cout << "0\n";
			}
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
	}
}