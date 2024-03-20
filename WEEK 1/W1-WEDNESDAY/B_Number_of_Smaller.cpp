#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n];
    int ar[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    int l = 0, r = 0, ans = 0;
    while (r < m)
    {
        while (l < n && ar[r] > a[l])
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }
    cout << '\n';
    return 0;
}