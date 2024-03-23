// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-23 03:28:30
#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int op = 0;
                for (int k = 0; k < m; k++)
                {
                    op += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, op);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}