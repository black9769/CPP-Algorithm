#include<stdio.h>
using namespace std;
int cnt[50001];
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		//�ð����⵵�� nlogn �����̴�
		for (j = i; j <= n; j = j + i) { //����� ����� ���� ���ڷ� ������
			cnt[j]++;
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}


//#include <iostream>
//
//using namespace std;
//
//int getDivisor(int num) {
//    int cnt = 0;
//    for (int i = 1; i <= num; i++) {
//        if (num % i == 0) {
//            cnt++;
//        }
//    }
//
//    return cnt;
//}
//
//int main() {
//    int n = 50000;
//    //cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        cout << getDivisor(i) << " ";
//    }
//
//    return 0;
//
//}