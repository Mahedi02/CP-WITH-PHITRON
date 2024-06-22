// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-01 12:22:44
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
    loop(i, 0, n)
    {
        cin >> v[i];
    }
    // auto ok = [&](ll m)
    // {
    //     ll tot = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         tot += (m / v[i]);
    //         if (tot >= k)
    //         {
    //             return true;
    //         }
    //     }
    //     return false;
    // };
    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = (r + l) / 2;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (mid / v[i]);
            if (sum >= k)
                break;
        }
        if (sum >= k)
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
    return 0;
}