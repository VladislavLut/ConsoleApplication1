#include <iostream>

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;

	if (n < k)

		cout << "first is less";

	else if (n > k)

		cout << "second is less";

	else

		cout << "equal";
}
