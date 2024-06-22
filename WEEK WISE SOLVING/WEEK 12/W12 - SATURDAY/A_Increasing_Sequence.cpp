/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-08 || 19:44:29 */
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
void solve()
{
    int n;
    cin >> n;
    vec v(n);
    int ans = 0;
    loop(i, 0, n)
    {
        cin >> v[i];
        ans++;
        if (ans == v[i])
        {
            ans++;
        }
    }
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