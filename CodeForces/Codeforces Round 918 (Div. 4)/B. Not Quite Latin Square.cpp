#include <bits/stdc++.h>
using namespace std;

void solve()
{

    char a[3][3];
    int freq[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] >= 'A' && a[i][j] <= 'C')
            {
                freq[a[i][j] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (freq[i] == 2)
        {
            cout << (char)('A' + i) << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {

        solve();
    }

    return 0;
}