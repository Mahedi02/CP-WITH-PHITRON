// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-03 21:18:13
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
        ll n;
        cin >> n;
        input();
        sorta(v);
        auto ok = [&](ll mid)
        {
            int l = 0, cnt = 1;
            for (int r = 0; r < n; r++)
            {
                if ((v[r] - v[l]) > 2 * mid)
                {
                    cnt++;
                    l = r;
                }
            }
            return cnt <= 3;
        };
        ll l = 0, r = 1e9, mid, ans = 0;
        while (l <= r)
        {
            mid = (r + l) / 2;
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