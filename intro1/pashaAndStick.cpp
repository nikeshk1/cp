#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 6 || n % 2 == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << n / 4 - 1 + (n / 2) % 2 << endl;
    return 0;
}