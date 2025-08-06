#include<iostream>
#include<queue>
using namespace std;

int main() {
	int n;
	cin >> n;

	queue<int> q;

	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}

	for (int i = 0; i < n - 1; i++) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();
}