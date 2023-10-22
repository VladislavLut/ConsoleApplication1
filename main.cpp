#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    if (n == k)

        cout << "equal\n" << n << ' ' << k;

    else {

        cout << "not equal\n";

        if (n > k)

            cout << k << ' ' << n;

        else

            cout << n << ' ' << k;
}
