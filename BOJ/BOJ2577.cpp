#include <iostream>
#include <string>

using namespace std;

int a, b, c = 0;

int arr[10] = { 0, };

int main() {

	cin >> a >> b >> c;

	string mul = to_string(a * b * c);
	
	for (int i = 0; i < mul.length(); i++) {
		int num = mul[i] - 48;
		for (int j = 0; j < 10; j++) {
			if (j == num) {
				arr[j]++;
				break;
			}
		
		}
	}

	for (int i : arr) {
		cout << i << endl;
	}
}