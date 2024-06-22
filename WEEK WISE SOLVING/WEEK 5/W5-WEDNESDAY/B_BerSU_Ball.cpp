// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-24 10:42:17
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    int n;
    cin >> n;
    vec b(n);
    loop(i, 0, n)
    {
        cin >> b[i];
    }
    int m;
    cin >> m;
    vec g(m);
    loop(i, 0, m)
    {
        cin >> g[i];
    }
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    int ans = 0;
    vec used_g(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!used_g[j] && abs(b[i] - g[j]) <= 1)
            {
                ans++;
                used_g[j] = 1;
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}