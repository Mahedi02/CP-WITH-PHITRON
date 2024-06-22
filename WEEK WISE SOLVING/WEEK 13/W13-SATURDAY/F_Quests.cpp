/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-22 || 15:27:57 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define output(x)           \
    for (ll val : x)        \
        cout << val << " "; \
    cout << '\n';
#define test  \
    {         \
    }         \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)
#define pb push_back
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
void solve()
{
    ll n, c, d;
    cin >> n >> c >> d;
    vec v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sortd(v);
    ll l = -1, r = d + 1, ans = -1;
    while (l < r)
    {
        ll mid = (l + r + 1) / 2;
        ll ki = 0, si = 0;
        for (ll i = 0; i < d; i++)
        {
            ki = i % (mid + 1);
            if (ki < n)
                si += v[ki];
        }
        if (si >= c)
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (l == -1)
        cout << "Impossible\n";
    else if (l == d + 1)
        cout << "Infinity\n";
    else
        cout << l << '\n';
}
int main()
{
    I_AM_SPEED;
    test
    {
        solve();
    }
    return 0;
}