// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-28 18:53:54
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
    test
    {
        ll n, q;
        cin >> n >> q;
        vec v(n), pref(n);
        loop(i, 0, n) cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        pref[0] = v[0];
        loop(i, 1, n)
        {
            pref[i] = pref[i - 1] + v[i];
        }
        while (q--)
        {
            ll a;
            cin >> a;
            auto it = lower_bound(pref.begin(), pref.end(), a);
            if (it - pref.begin() == n)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << it - pref.begin() + 1 << '\n';
            }
        }
    }
    return 0;
}