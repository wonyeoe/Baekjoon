#include<iostream>
#include<deque>
using namespace std;

int main() {
	deque<pair<int, int>> d;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		d.push_back({ i+1, num });
		// d.push_back(make_pair(i+1, num)); 와 동일
	}

	for (int i = 0; i < N; i++) {
		int a = d.front().second; //적혀있는 숫자
		cout << d.front().first << " ";
		d.pop_front();

		if (a > 0){
			for (int j = 0; j < a - 1; j++) {
				d.push_back(d.front());
				d.pop_front();
			}
		}
		else {
			for (int j = 0; j < -a; j++) {
				d.push_front(d.back());
				d.pop_back();
			}
		}
	}
}