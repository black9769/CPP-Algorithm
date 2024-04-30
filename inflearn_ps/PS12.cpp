#include<stdio.h>
using namespace std;
int cnt[50001];
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		//시간복잡도가 nlogn 정도이다
		for (j = i; j <= n; j = j + i) { //배수를 약수로 갖는 숫자로 진행함
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