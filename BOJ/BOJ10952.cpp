#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {

	
	while (1) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)break;
		cout << a + b << "\n";
	}

	return 0;
}