#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        char ch = 'A';
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j > n - i && j < n + i)
            {
                cout << ch;
                if (k++ < i)
                    ch++;
                else
                    ch--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}