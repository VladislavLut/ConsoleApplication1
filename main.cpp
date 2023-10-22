#include <iostream>

using namespace std;

int main()
{
    int n, k;

    std::cin >> n >> k;

    if (n == k)

        std::cout << "equal\n" << n << ' ' << k;

    else {

        std::cout << "not equal\n";

        if (n > k)

            std::cout << k << ' ' << n;

        else

            std::cout << n << ' ' << k;
}