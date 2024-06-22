// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-26 15:50:03
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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vec v(n);
    loop(i, 0, n) { cin >> v[i]; }
    ll ans = 0;
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += v[i];
        for (int j = i + 1; j < n; j++)
        {
            sum += v[j];
            if (sum >= l && sum <= r && abs(v[j] - v[i]) >= x)
            {
                ans++;
            }
            else if (sum > r)
            {
                sum -= v[j];
            }
            else if (abs(v[j] - v[i]) == 0)
            {
                sum -= v[j];
            }
        }
        sum = 0;
    }
    cout << ans << '\n';
    return 0;
}