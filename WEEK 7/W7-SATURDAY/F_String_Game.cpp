// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-04 16:21:10
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input()                 \
    vec v(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define output()     \
    for (ll val : v) \
        cout << val << " ";
#define test  \
    {         \
    }         \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    input();
    auto ok = [&](int mid)
    {
        vector<bool> del(n + 1);
        for (int i = 0; i < mid; i++)
        {
            del[v[i]] = true;
        }
        int j = 0;
        bool milse = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == t[j] && !del[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                milse = true;
                break;
            }
        }
        return milse;
    };
    int l = 0,
        r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}