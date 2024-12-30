#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << (char)(ch + j) << " ";
        }
        cout << "\n";
    }
    return 0;
}