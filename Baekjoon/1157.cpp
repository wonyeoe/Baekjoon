#include<iostream>
using namespace std;

int main() {
	int alphabet[26] = { 0 }; //�����Ⱚ �������� �ʱ�ȭ
	int count = 0;
	string input;
	//�ƽ�Ű�ڵ�: �빮�� 65~90, �ҹ��� 97~122


	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] < 97) {
			alphabet[input[i] - 65]++;
		}
		else {
			alphabet[input[i] - 97]++;
		}
	}


	int max = 0;
	int maxIdx = 0;

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			maxIdx = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == max) {
			count++;
		}
	}

	if (count > 1) {
		cout << "?";
	}
	else {
		cout << (char)(maxIdx + 65);
	}
}