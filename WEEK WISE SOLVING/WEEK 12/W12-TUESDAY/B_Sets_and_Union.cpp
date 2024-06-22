/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-06-11 || 15:11:12 */
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
    vector<set<int>> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        for (int j = 0; j < val; j++)
        {
            int k;
            cin >> k;
            s.insert(k);
            v[i].insert(k);
        }
    }
    int ans = 0;
    for (auto it : s)
    {
        set<int> nn;
        for (int j = 0; j < n; j++)
        {
            if (v[j].count(it))
            {
                cout << "here" << it << " ";
                continue;
            }
            else
            {
                for (int k : v[j])
                {
                    cout << '\n';
                    nn.insert(k);
                    cout << "there" << k << " ";
                }
                cout << '\n';
            }
        }
        if (nn.size() != s.size())
        {
            ans = max(ans, (int)nn.size());
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