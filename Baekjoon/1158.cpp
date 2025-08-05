#include<iostream>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	queue<int> que;

	for (int i = 1; i <= n; i++) {
		que.push(i);
	}
	cout << "<";
	while (que.size() != 1) {
		for (int i = 0; i < k-1; i++) {
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << ", ";
		que.pop();
	}
	cout << que.front() << ">";
}