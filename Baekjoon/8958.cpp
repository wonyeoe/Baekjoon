#include<iostream>
using namespace std;

int main() {
	int test;
	cin >> test;

	while (test-- != 0) {
		int total = 0;
		int score = 0;
		string quiz;
		cin >> quiz;

		for (int i = 0; i < quiz.length(); i++) {
			if (quiz[i] == 'X') {
				score = 0;
			}
			if (quiz[i] == 'O') {
				score++;
			}
			total += score;
		}
		cout << total << "\n";
	}
}