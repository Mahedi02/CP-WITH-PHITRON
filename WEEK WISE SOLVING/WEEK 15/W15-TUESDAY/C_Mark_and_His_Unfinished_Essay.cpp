/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-07-09 || 21:21:45 */
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
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    string t = s;
    while (c--)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        for (ll i = l; i <= r; i++)
        {
            t.push_back(s[i]);
        }
    }
    while (q--)
    {
        ll a;
        cin >> a;
        a--;
        cout << t[a] << '\n';
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
