#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	priority_queue<int> pq;
 
	for (int i = 0; i < n * n; i++) {
		int x;
		cin >> x;

		if (pq.size() < n) {
			pq.push(-x);
		}
		else if (x > -pq.top()) {
			pq.pop();
			pq.push(-x);
		}
	}
	cout << -pq.top();
}
