// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-01 20:42:22
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
        ll ar[n][n - 1];
        loop(i, 0, n)
        {
            loop(j, 0, n - 1)
            {
                cin >> ar[i][j];
            }
        }
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[ar[i][0]]++;
        }
        ll maxV = 0;
        ll maxU = 0;
        for (auto it : mp)
        {
            if (it.second > maxV)
            {
                maxU = it.first;
                maxV = it.second;
            }
        }
        loop(i, 0, n)
        {
            if (ar[i][0] != maxU)
            {
                cout << maxU << " ";
                loop(j, 0, n - 1)
                {
                    cout << ar[i][j] << " ";
                }
            }
        }
        cout << '\n';
    }
    return 0;
}