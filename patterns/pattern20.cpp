#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j++ <= i)
        {
            cout << "*";
        }

        j--;
        while (j++ < n)
        {
            cout << "  ";
        }
        j = 0;
        while (j++ <= i)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = n - 1; i > 0; i--)
    {
        int j = 0;
        while (j++ < i)
        {
            cout << "*";
        }

        j--;
        while (j++ < n)
        {
            cout << "  ";
        }

        j = 0;
        while (j++ < i)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}