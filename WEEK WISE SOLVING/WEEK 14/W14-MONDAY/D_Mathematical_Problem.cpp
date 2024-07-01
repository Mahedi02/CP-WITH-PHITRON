/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-07-01 || 21:29:57 */
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2)
    {
        cout << stoi(s) << '\n';
        return;
    }
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        vec v;
        for (int j = 0; j < i; j++)
        {
            v.pb(s[j] - '0');
        }
        v.pb(stoi(s.substr(i, 2)));
        for (int j = i + 2; j < n; j++)
        {
            v.pb(s[j] - '0');
        }
        sorta(v);
        if (v[0] == 0)
        {
            cout << 0 << '\n';
            return;
        }
        int sum = 0;
        for (auto val : v)
        {
            if (val != 1)
                sum += val;
        }
        if (sum == 0)
        {
            sum = 1;
        }
        ans = min(ans, sum);
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