#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	//공백에 더하기 1을 해야됨
	int res = 1;

	//문자열 한번에 입력받기
	getline(cin, s);

	//문자열의 길이가 1이고 처음이 공백일때
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