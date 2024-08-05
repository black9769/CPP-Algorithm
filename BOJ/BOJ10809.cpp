#include <iostream>
#include <cstring>

using namespace std;

int main() {
	string str;

	cin >> str;

	int arr[26] = { 0, };

	memset(arr, -1, sizeof(arr));

	for (int i = 0; i < str.size(); i++) {
		char c = str[i];

		if (arr[c - 'a'] == -1) {
			arr[c - 'a'] = i;
		}
	}

	for (int i : arr) {
		cout << i << " ";
	}

	return 0;
}