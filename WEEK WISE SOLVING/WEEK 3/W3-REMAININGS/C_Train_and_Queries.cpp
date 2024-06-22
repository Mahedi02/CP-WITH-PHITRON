// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-05 14:26:47
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vec v(n);
        map<int, vec> mp;
        loop(i, 0, n)
        {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        while (k--)
        {
            ll a, b;
            cin >> a >> b;
            bool ans = false;
            if (!mp[a].empty() && !mp[b].empty())
            {
                if ((a == b) || (mp[a].front() < mp[b].back()))
                {
                    ans = true;
                }
            }
            if (ans)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}