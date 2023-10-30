#include <iostream>

using namespace std;

int findMaximum() {
	int maxNumber = INT_MIN;

	for (int i = 0; i < 7; i++) {
		int number;
		cout << "Enter number " << i + 1 << " : ";
		cin >> number;

		if (number > maxNumber) {
			maxNumber = number;

		}

	}
	return maxNumber;
}
int main() {
	int maximum = findMaximum();
	cout << "The maximum number is: " << maximum << endl;

	return 0;
}
