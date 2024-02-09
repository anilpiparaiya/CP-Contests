#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    int a[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int sq = sqrt(sum);

    if (1LL * sq * sq == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {

        solve();
    }

    return 0;
}