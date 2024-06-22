// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-25 17:39:24
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vec v(n);
        loop(i, 0, n) cin >> v[i];
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < 0)
            {
                if (abs(v[i]) > v[i + 1])
                {
                    v[i] = abs(v[i]);
                    v[i + 1] = (-v[i + 1]);
                }
            }
        }
        ll sum = 0;
        for (int val : v)
        {
            sum += val;
        }
        cout << sum << '\n';
    }
    return 0;
}