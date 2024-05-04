// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-04 10:29:46
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
    test
    {
        ll n;
        cin >> n;
        input();
        ll mn = INT_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            mn = min(mn, max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1])));
        }
        mn = min(mn, abs(v[1] - v[0]));
        mn = min(mn, abs(v[n - 1] - v[n - 2]));
        cout << mn << '\n';
    }
    return 0;
}