#include <iostream>

using namespace std;

// recursive multiplication

int multiplicate(int a, int b) {
	if (b == 1) {
		return a;
	}
	else {
		return a + multiplicate(a, b - 1);
	}
}

int main() {
	int result = 0;
	int a, b;
	cout << "a: " << endl;
	cin >> a;
	cout << "b: " << endl;
	cin >> b;

	result = multiplicate(a, fabs(b));

	if (b < 0) result *= -1;

	cout << "result: " << result << endl;

	return 0;
}