#include <iostream>

using namespace std;

int A =0;
int B = 0;

int main() {
	cin >> A >> B;

	if (A > B) cout << ">";
	else if (A < B) cout << "<";
	else if (A == B) cout << "==";

	return 0;
}