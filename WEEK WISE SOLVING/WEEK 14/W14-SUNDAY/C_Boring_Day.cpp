/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-29 || 14:20:51 */
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
    int n, l, r;
    cin >> n >> l >> r;
    input(v);
    int j = 0, sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum < l)
            continue;
        if (sum <= r)
        {
            ans++;
            j = i + 1;
            sum = 0;
            continue;
        }
        while (j <= i && sum > r)
        {
            sum -= v[j];
            j++;
        }
        if (sum >= l)
        {
            ans++;
            sum = 0;
            j = i + 1;
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