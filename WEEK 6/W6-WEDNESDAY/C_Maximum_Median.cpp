// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-01 16:17:03
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
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
    ll n, k;
    cin >> n >> k;
    vec v(n);
    loop(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end());
    // auto ok = [&](ll mid)
    // {
    //     ll cnt = 0;
    //     for (int i = (n / 2); i < n; i++)
    //     {
    //         cnt += (v[i] < mid ? (mid - v[i]) : 0);
    //     }
    //     return cnt <= k;
    // };
    ll l = 1, r = 2e9, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            cnt += (v[i] < mid ? (mid - v[i]) : 0);
        }
        if (cnt <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}