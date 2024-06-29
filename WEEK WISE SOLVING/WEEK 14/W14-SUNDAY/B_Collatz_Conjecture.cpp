/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-25 || 21:20:47 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<ll>());
#define loop(i, s, n) for (ll i = s; i < n; i++)
#define input(x)               \
    vec x(n);                  \
    for (ll i = 0; i < n; i++) \
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
    int x, y, k;
    cin >> x >> y >> k;
    while (k > 0 && x > 1)
    {
        int needed = y - x % y;
        if (needed >= k)
        {
            x += k;
            k = 0;
        }
        else
        {
            x += needed;
            k -= needed;
        }
        while (x % y == 0)
        {
            x /= y;
        }
    }
    if (k > 0)
    {
        x += k % (y - 1);
    }
    cout << x << '\n';
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
