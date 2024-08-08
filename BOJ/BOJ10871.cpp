#include <iostream>

using namespace std;

int main() {

	int N, X;

	cin >> N >> X;
	int arr[10001] = { 0, };

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (X > num) cout << num << " ";
	}


	return 0;
}