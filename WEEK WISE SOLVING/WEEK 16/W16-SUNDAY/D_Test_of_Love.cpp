/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-07-11 || 22:09:12 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end())
#define sortd(x) sort(x.begin(), x.end(), greater<int>())
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
    ll n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s += 'L';
    bool love_what_happening = true;
    ll cur = 0;
    while (true)
    {
        for (ll i = 1; i < m + 1; i++)
        {
            cur++;
            if (cur >= s.size())
            {
                break;
            }
            if (s[cur - 1] == 'L')
            {
                break;
            }
        }
        if (cur >= n + 1)
        {
            break;
        }
        if (s[cur - 1] == 'L')
        {
            continue;
        }
        if (s[cur - 1] == 'C')
        {
            love_what_happening = false;
            break;
        }
        while (k)
        {
            cur++;
            k--;
            if (s[cur - 1] == 'L')
            {
                break;
            }
            if (s[cur - 1] == 'C')
            {
                love_what_happening = false;
                break;
            }
        }
        if (s[cur - 1] == 'W')
        {
            love_what_happening = false;
            break;
        }
    }
    (love_what_happening) ? yes : no;
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