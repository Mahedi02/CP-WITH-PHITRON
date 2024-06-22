// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-26 08:12:01
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i <= n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first + a.second < b.first + b.second;
}
int main()
{
    I_AM_SPEED;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<pair<ll, ll>> v(n + 1);
        loop(i, 1, n)
        {
            ll val;
            cin >> val;
            v[i].first = val;
            v[i].second = i;
        }
        sort(v.begin(), v.end(), cmp);
        ll sum = 0;
        int cnt = 0;
        loop(i, 1, n)
        {
            sum += v[i].first + v[i].second;
            if (sum <= c)
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}