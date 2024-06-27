/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-27 || 14:48:53 */
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
    vec v(n);
    map<int, int> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll cnt1 = 0, cnt2 = 0;
    for (auto &[x, y] : mp)
    {
        if (mp[x] > 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    cout << cnt1 + (cnt2 + 1) / 2 << '\n';
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