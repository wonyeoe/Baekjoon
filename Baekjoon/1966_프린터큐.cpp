#include<iostream>
#include<queue>
using namespace std;

void run() {
	queue<pair<int, int>> q; //�߿䵵, �ε���(��°)
	int count = 0;

	int N, M; // ���� ����, ��� ������ �ñ��� ������ ���°�� �ִ��� (0����)
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		q.push(make_pair(a, i));
	}

	while (1) { //���� �ϳ� ����Ҷ�����
		int max = q.front().first; //�ִ� ã��
		for (int j = 0; j < q.size(); j++) {
			q.push(q.front());
			q.pop();

			if (q.front().first > max) {
				max = q.front().first;
			}
		}

		if (max == q.front().first) { // �� �� ������ �ִ� �߿䵵 -> ���
			count++;
			if (M == q.front().second) {
				cout << count << "\n";
				return;
			}
			q.pop();
		}
		else { //�ִ� > front �߿䵵
			q.push(q.front()); //front�� �ǵڷ� ������
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