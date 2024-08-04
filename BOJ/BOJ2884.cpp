#include <iostream>

using namespace std;

int h, m = 0;
int main() {

	cin >> h >> m;

	m = m - 45;

	if (m < 0) {
		h--;
		m += 60;
	}

	if (h < 0) h = 23;

	cout << h << " " << m;

	return 0;
}