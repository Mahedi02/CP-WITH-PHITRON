/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-07-02 || 22:02:03 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vp vector<pair<int, int>>
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
const int N = 1e6 + 5;
int n, m;
int a[N], b[N], c[N];
vp v;
map<ll, ll> dp;
ll dp_bin(int cur)
{
    if (dp.count(cur))
    {
        return dp[cur];
    }
    int l = 0, r = v.size() - 1, idx = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid].second <= cur)
        {
            idx = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (idx == -1)
    {
        return dp[cur] = 0;
    }
    ll diff = v[idx].first;
    ll need = v[idx].second;
    ll smithing = (cur - need) / diff + 1;
    ll rem = cur - smithing * diff;
    ll ans = smithing * 2 + dp_bin(rem);
    return dp[cur] = ans;
}
int main()
{
    I_AM_SPEED;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        v.pb({a[i] - b[i], a[i]});
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    sort(v.begin(), v.end());
    vp t;
    for (int i = 0; i < n; i++)
    {
        if (t.empty())
        {
            t.pb(v[i]);
            continue;
        }
        if (t.back().second > v[i].second)
        {
            t.pb(v[i]);
        }
    }
    v = t;
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        ans += dp_bin(c[i]);
    }
    cout << ans << '\n';
    return 0;
}