// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-03 15:04:41
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input()                 \
    vec v(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define output()     \
    for (ll val : v) \
        cout << val << " ";
#define test  \
    {         \
    }         \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    test
    {
        ll n, k;
        cin >> n >> k;
        ll l = 1, r = 2e9, mid, ans;
        auto ok = [&](ll m)
        {
            return (mid - (mid / n) >= k);
        };
        while (l <= r)
        {
            mid = (l + r) / 2;
            // ll ab = (mid - (mid / n));
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}