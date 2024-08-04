#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> numSet;

	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		numSet.insert(n % 42);
	}

	cout << numSet.size();

	return 0;

}