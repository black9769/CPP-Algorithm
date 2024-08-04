#include <iostream>
#include <string>

using namespace std;

int tc = 0;

int main() {
	cin >> tc;

	while (tc--)
	{
		int r = 0;
		cin >> r;
		
		string str;
		cin >> str;

		for (char c : str) {
			for (int i = 0; i < r; i++) {
				cout << c;
			}
		}

		cout << endl;

	}



	return 0;
}