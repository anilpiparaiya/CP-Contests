#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);

        if (a[0] == a[1])
            cout << a[2] << endl;
        else
            cout << a[0] << endl;
    }

    return 0;
}