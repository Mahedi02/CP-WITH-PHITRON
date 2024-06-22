/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-05-12 || 22:47:21 */
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
int main()
{
    I_AM_SPEED;
    ll n, k;
    cin >> n >> k;
    vec v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.pb(i);
            if ((n / i) != i)
            {
                v.pb(n / i);
            }
        }
    }
    sorta(v);
    (v.size() < k) ? cout << -1 << '\n' : cout << v[k - 1] << '\n';
    return 0;
}