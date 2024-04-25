// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-25 16:33:44
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
        ll sum = 0;
        loop(i, 0, n)
        {
            sum = sum + v[i];
            if (sum < 0)
                sum = 0;
        }
        cout << sum << '\n';
    }
    return 0;
}