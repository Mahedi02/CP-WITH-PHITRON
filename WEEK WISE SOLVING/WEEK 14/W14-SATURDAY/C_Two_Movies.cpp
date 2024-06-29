/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-28 || 21:40:32 */
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
    input(v1);
    input(v2);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            if (v1[i] > v2[i])
            {
                x += v1[i];
            }
            else
            {
                y += v2[i];
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (v1[i] == v2[i] && v1[i] == 1)
        {
            if (y < x)
            {
                y++;
            }
            else
            {
                x++;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (v1[i] == v2[i] && v1[i] == -1)
        {
            if (y < x)
            {
                x--;
            }
            else
            {
                y--;
            }
        }
    }
    cout << min(x, y) << '\n';
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