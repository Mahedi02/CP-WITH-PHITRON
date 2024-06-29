/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-29 || 21:26:06 */
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
    ll n;
    cin >> n;
    vec v;
    for (ll i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        v.pb((val - i));
    }
    sorta(v);
    map<ll, ll> mp;
    for (ll i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    ll ans = 0;
    for (auto [x, y] : mp)
    {
        y--;
        ans += (y * (y + 1)) / 2;
    }
    // output(v);
    cout << ans << '\n';
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