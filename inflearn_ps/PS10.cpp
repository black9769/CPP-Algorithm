#include<stdio.h>

//���ڿ��� �����ؼ� �����ϴ°� �ƴ�
int digit_sum(int x) {
	int sum = 0, tmp;
	while (x > 0) { //��� 10�� �����������ν� �������� 0�̵� 
		tmp = x % 10;
		sum = sum + tmp;
		x /= 10;
	}
	return sum;
}

int main() {
	freopen("input.txt", "rt", stdin);
	int n, num, i, sum, max = -2147000000, res;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if (num > res) res = num;
		}
	}
	printf("%d\n", res);
	return 0;
}



//#include <iostream>
//#include <string>
//#include <climits>
//
//using namespace std;
//
//int digit_sum(int num) {
//    int sum = 0;
//
//    string str = to_string(num);
//
//    for (int i = 0; i < str.size(); i++) {
//        sum += str[i] - '0';
//    }
//
//    return sum;
//}
//
//int arr[105] = { 0, };
//int main() {
//    int tc;
//    cin >> tc;
//
//    int max = INT_MIN;
//    int nn;
//
//    while (tc--) {
//        int number;
//        cin >> number;
//        int sum = digit_sum(number);
//        if (max < sum) {//ũ�ų� ���ٸ�
//            max = sum;
//            nn = number;
//        }
//        else if (max == sum) {
//            if (nn < number) nn = number;
//        }
//    }
//
//    cout << nn;
//}