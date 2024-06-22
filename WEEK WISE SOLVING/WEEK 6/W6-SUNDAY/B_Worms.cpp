// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-28 21:30:39
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
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
    int n;
    cin >> n;
    vec v(n);
    loop(i, 0, n) cin >> v[i];
    vector<pair<ll, ll>> vp;
    vp.push_back({1, v[0]});
    for (int i = 1; i < n; i++)
    {
        vp.push_back({vp[i - 1].second + 1, vp[i - 1].second + v[i]});
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (vp[mid].first <= a && vp[mid].second >= a)
            {
                ans = mid + 1;
                break;
            }
            else if (vp[mid].second < a)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}