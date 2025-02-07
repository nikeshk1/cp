#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<vector<int> > state(n + 1, vector<int>(26, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            state[i][j] = state[i - 1][j];
        }
        state[i][s[i - 1] - 'a']++;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int t = r - l + 1;
        vector<int> countArr;
        for (int i = 0; i < 26; i++)
        {
            int count = state[r][i] - state[l - 1][i];
            if (count)
                countArr.push_back(count);
        }
        int len = countArr.size();
        sort(countArr.begin(), countArr.end());
        int minDelete = t;
        for (int i = 0; i < len; i++)
        {
            minDelete = min(minDelete, t - (len - i) * countArr[i]);
        }
        cout << minDelete << endl;
    }
    return 0;
}