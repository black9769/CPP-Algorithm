#include <iostream>

using namespace std;

//cnt�������� ���� ��ȣ�� �ݴ� ��ȣ�� ���� ����
//������ ������ return

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



/* �� Ǯ��*/
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
//		if (str[i] == ')') { //���� ��ȣ�� ����
//			if (s.top() == '(') { //stak�� top�� ���� ��ȣ���
//				s.pop(); //top�� ����.
//			}
//		}
//		else s.push(str[i]); //�ƴϸ� �ִ´�.
//
//	}
//
//	cout << (s.size() == 0 ? "YES" : "NO");
//
//	return 0;
//
//}