/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-07-09 || 20:39:07 */
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
    ll n, k;
    cin >> n >> k;
    ll a = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll ans = (i * (i + 1)) / 2;
        if (ans - (n - i) == k)
        {
            a = i;
            break;
        }
    }
    cout << n - a << '\n';
    return 0;
}