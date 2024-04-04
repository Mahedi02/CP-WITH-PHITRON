// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-04 21:37:30
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
        ll n, k, q;
        cin >> n >> k >> q;
        ll ans = 0;
        ll cnt = 0;
        loop(i, 0, n)
        {
            ll x;
            cin >> x;
            if (x > q)
            {
                if (cnt >= k)
                {
                    ll t = cnt - k + 1;
                    ans += (t * (t + 1)) / 2;
                }
                cnt = 0;
            }
            else
                cnt++;
        }
        if (cnt >= k)
        {
            ll t = cnt - k + 1;
            ans += (t * (t + 1)) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}