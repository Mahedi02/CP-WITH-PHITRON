/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-17 || 21:22:41 */
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
    ll n, a, b;
    cin >> n >> a >> b;
    if (a > b)
    {
        cout << n * a << '\n';
        return;
    }
    if (b - a >= n - 1)
    {
        ll ans = b * (b + 1) / 2 - (b - n) * (b - n + 1) / 2;
        cout << ans << '\n';
        return;
    }
    else
    {
        ll ans = b * (b + 1) / 2 - a * (a + 1) / 2;
        n -= b - a;
        ans += n * a;
        cout << ans << endl;
    }
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
