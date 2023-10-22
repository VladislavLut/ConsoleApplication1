#include <iostream>

using namespace std;

int main()
{
	int n;

	std::cin >> n;

	if (n > 0)

		std::cout << "positive";

	else if (n < 0)

		std::cout << "negative";

	else

		std::cout << "zero";
}