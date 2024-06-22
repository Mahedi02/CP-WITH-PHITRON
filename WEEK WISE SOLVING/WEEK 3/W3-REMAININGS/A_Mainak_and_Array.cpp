// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-05 23:01:55
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n)
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        loop(i, 0, n)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        ll ans = a[n - 1] - a[0];
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, a[i] - a[0]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[n - 1] - a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, a[i - 1] - a[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}