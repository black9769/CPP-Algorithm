#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	//���鿡 ���ϱ� 1�� �ؾߵ�
	int res = 1;

	//���ڿ� �ѹ��� �Է¹ޱ�
	getline(cin, s);

	//���ڿ��� ���̰� 1�̰� ó���� �����϶�
	if (s.length() == 1 && s[0] == ' ') {
		cout << 0;
		return 0;
	}

	for (int i = 1; i < s.length() - 1; i++) {
		if (s[i] == ' ') res++;
	}

	cout << res;

	return 0;
}