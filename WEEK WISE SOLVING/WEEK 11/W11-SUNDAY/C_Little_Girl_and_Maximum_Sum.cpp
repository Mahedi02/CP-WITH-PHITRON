/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-01 || 23:09:32 */
#include <bits/stdc++.h>
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
int main()
{
    I_AM_SPEED;
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<ll> d(n + 2);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        d[l] += 1;
        d[r + 1] -= 1;
    }
    for (ll i = 1; i <= n; i++)
    {
        d[i] = d[i] + d[i - 1];
    }
    sortd(d);
    sortd(v);
    ll sum = 0;
    for (ll i = 0; i <= n; i++)
    {
        sum += (v[i] * d[i]);
    }
    cout << sum << '\n';
    return 0;
}