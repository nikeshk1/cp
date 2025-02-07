#include <bits/stdc++.h>
using namespace std;

#define ch(c) (c - 'a');
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string j, s;
        int count = 0;
        cin >> j >> s;

        bool jewels[128] = {0};
        for (char ch : j)
        {
            jewels[ch] = 1;
        }
        for (char ch : s)
        {
            if (jewels[ch])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
