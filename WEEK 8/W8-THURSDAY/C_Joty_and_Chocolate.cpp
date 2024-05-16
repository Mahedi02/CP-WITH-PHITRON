/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-05-16 || 19:14:33 */
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define output(x)    \
    for (ll val : x) \
        cout << val << " ";
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
using namespace std;
// void solve()
// {
//     ll n, a, b, p, q;
//     cin >> n >> a >> b >> p >> q;
//     ll diva = n / a;
//     ll divb = n / b;
//     ll xy = (a * b) / (__gcd(a, b));
//     ll divab = n / xy;
//     if (p > q)
//     {
//         divb = divb - divab;
//     }
//     else
//     {
//         diva = diva - divab;
//     }
//     cout << diva * p + divb * q << '\n';
// }
int main()
{
    I_AM_SPEED;
    // solve();
    ll n, a, b, p, q, ans = 0, overlap;
    cin >> n >> a >> b >> p >> q;
    ans += ((n / a) * p);
    ans += ((n / b) * q);
    overlap = (n / ((a * b) / (__gcd(a, b))));
    ans -= min((p * overlap), (q * overlap));
    cout << ans << '\n';
    return 0;
}