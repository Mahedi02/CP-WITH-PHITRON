// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-22 14:08:16
#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    vector<int> v;
    loop(i, 0, n) cin >> a[i];
    loop(i, 0, m) cin >> b[i];
    int l = 0, r = 0;
    while (l < n || r < m)
    {
        if (l < n && a[l] < b[r])
        {
            v.push_back(a[l]);
            l++;
        }
        else if (r < m && b[r] < a[l])
        {
            v.push_back(b[r]);
            r++;
        }
        else
        {
            if (l < n)
            {
                v.push_back(a[l]);
                l++;
            }
            else if (r < m)
            {
                v.push_back(b[r]);
                r++;
            }
        }
    }
    for (int c : v)
    {
        cout << c << " ";
    }
    return 0;
}