#include <iostream>

using namespace std;

int main() {
	int n, m, i, sum = 0;

	cin >> n >> m;

	for (i = 0; i <= n; i++) {
		if (i % m == 0) {
			sum += i;
		}
	}

	return 0;
}
