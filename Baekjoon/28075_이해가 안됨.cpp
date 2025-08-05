#include<iostream>
using namespace std;

int n, m;
int cnt = 0; //�⿩�� >=m �� ����� ��
int missions[2][3]; // [����][���]



//���� �ӹ��������� ��, ��������� ��ô�� ��, ������ �ӹ��� ������ ���
void solve(int day, int score, int pre) {
	// base case :�ӹ��� ��� �Ϸ��� �� �⿩���� m�̻��̸� count++
	if (day == n) {
		if (score >= m) {
			cnt++;
		}
		return;
	}
	// recursive case: day��° ���� �ӹ��� ��ġ�� ���� ���� ����
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			//��Ұ� ������ ���ٸ� ��ô�� ����
			if (pre == j) {
				solve(day + 1, score + missions[i][j] / 2, j);
			}
			else {
				solve(day + 1, score + missions[i][j], j);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> missions[i][j];
		}
	}

	solve(0, 0, -1);
	cout << cnt << "\n";
}