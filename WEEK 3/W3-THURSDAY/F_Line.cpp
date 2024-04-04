// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-04 12:53:37
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
        string s1;
        cin >> s1;
        ll sum = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'L')
                sum += i;
            else
                sum += (n - i - 1);
        }
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'L')
            {
                ll ans = ((n - i - 1) - i);
                if (i < (n - i - 1))
                    v.push_back(ans);
            }
            else
            {
                ll ans = (i - (n - i - 1));
                if (i > (n - i - 1))
                    v.push_back(ans);
            }
        }
        sort(v.begin(), v.end(), greater<>());
        for (int i = 0; i < n; i++)
        {
            if (i < v.size())
                sum += v[i];
            cout << sum << " ";
        }
        cout << '\n';
    }
    return 0;
}