#include <iostream>

using namespace std;

int maxValue = 0;
int maxIdx = 0;

int main() {
	
	for (int i = 0; i < 9; i++) {
		int num = 0;
		cin >> num;
		if (maxValue < num) {
			maxIdx = i + 1;
			maxValue = num;
		}
	}

	cout << maxValue << endl;
	cout << maxIdx;

	return 0;

}