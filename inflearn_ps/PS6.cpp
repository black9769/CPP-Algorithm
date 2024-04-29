#include<iostream>

using namespace std;

int main() {
	char a[100];

	int res = 0, cnt=0, i;

	cin >> a;

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			//자릿수를 더해서 만드는법
			res = res * 10 + (a[i] - 48);
		}
	}
	
	cout << res << endl;

	for (i = 1; i <= res; i++) {
		if (res % i == 0) cnt++;
	}
	cout << cnt;
	return 0;

}