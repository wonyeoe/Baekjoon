#include<iostream>
#include<queue>
using namespace std;

void run() {
	queue<pair<int, int>> q; //중요도, 인덱스(번째)
	int count = 0;

	int N, M; // 문서 개수, 출력 순서가 궁금한 문서가 몇번째에 있는지 (0부터)
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		q.push(make_pair(a, i));
	}

	while (1) { //문서 하나 출력할때까지
		int max = q.front().first; //최댓값 찾기
		for (int j = 0; j < q.size(); j++) {
			q.push(q.front());
			q.pop();

			if (q.front().first > max) {
				max = q.front().first;
			}
		}

		if (max == q.front().first) { // 맨 앞 문서가 최대 중요도 -> 출력
			count++;
			if (M == q.front().second) {
				cout << count << "\n";
				return;
			}
			q.pop();
		}
		else { //최댓값 > front 중요도
			q.push(q.front()); //front를 맨뒤로 보내기
			q.pop();
		}
	}
}

int main() {
	int test;
	cin >> test;

	while (test-- != 0) {
		run();
	}
}