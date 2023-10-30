#include <iostream>
#include <string>

using namespace std;

int swapDigits(int number) {
	string numberString = to_string(number);

	if (numberString.length() != 4) {
		throw invalid_argument("Input should be a four-digit number.");
	}

	swap(numberString[0], numberString[1]);
	swap(numberString[2], numberString[3]);

	int modifiedNumber = stoi(numberString);

	return modifiedNumber;


}
int main() {
	int number;
	cout << "Enter a four-digit number: ";
	cin >> number;

	try {
		int modifiedNumber = swapDigits(number);
		cout << "Modified number: " << modifiedNumber << endl;
	}
	catch (const invalid_argument& e) {
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}
