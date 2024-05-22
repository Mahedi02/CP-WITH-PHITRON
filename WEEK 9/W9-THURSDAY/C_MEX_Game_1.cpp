/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-05-22 || 21:10:01 */
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end())
#define sortd(x) sort(x.begin(), x.end(), greater<int>())
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x, n)             \
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
using namespace std;

int main()
{
    I_AM_SPEED;
    test
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[x]++;
        }
        int cnt = 0;
        for (int i = 0; i <= n; i++)
        {
            cnt += (v[i] == 1);
            if ((cnt == 2) || v[i] == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}
