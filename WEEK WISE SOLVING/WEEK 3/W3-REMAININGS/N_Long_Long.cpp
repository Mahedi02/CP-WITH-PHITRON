// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-05 21:19:54
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
        ll sum = 0;
        vector<int> ar(n);
        loop(i, 0, n)
        {
            ll val;
            cin >> val;
            if (val != 0)
            {
                ar.push_back(val);
            }
            sum += abs(val);
        }
        ll cnt = 0;
        for (int i = 0; i < ar.size(); i++)
        {
            if (ar[i] < 0)
            {
                cnt++;
                while (i < ar.size() && ar[i] < 0)
                {
                    i++;
                }
            }
        }
        cout << sum << " " << cnt << '\n';
    }
    return 0;
}