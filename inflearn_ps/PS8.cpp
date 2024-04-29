#include <iostream>

using namespace std;

//cnt연산으로 여는 괄호와 닫는 괄호로 구할 예졍
//음수가 나오면 return

int main() {
	char a[100];
	int i, cnt = 0;
	scanf("%s", &a);
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') cnt++;
		else if (a[i] == ')') cnt--;

		if (cnt < 0) break;
	}

	if (cnt == 0) printf("YES\n");
	else printf("NO\n");
	return 0;
}



/* 내 풀이*/
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//
//int main() {
//	string str;
//	cin >> str;
//
//	stack<char> s;
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] == ')') { //닫힌 괄호가 들어갈때
//			if (s.top() == '(') { //stak의 top이 열린 괄호라면
//				s.pop(); //top을 뺀다.
//			}
//		}
//		else s.push(str[i]); //아니면 넣는다.
//
//	}
//
//	cout << (s.size() == 0 ? "YES" : "NO");
//
//	return 0;
//
//}