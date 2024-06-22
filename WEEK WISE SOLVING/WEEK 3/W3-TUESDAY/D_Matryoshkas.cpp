// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-02 21:04:09
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n)
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        map<ll, ll> mp;
        loop(i, 0, n)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll val = v[i];
            if (mp[v[i]] != 0)
            {
                cnt++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}