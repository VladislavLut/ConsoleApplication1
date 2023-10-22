#include <iostream>

using namespace std;

int main()
{
	int n, k;

	std::cin >> n >> k;

	if (n < k)

		std::cout << "first is less";

	else if (n > k)

		std::cout << "second is less";

	else

		std::cout << "equal";
}