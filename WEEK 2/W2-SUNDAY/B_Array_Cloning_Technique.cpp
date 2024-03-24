// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-24 00:14:36
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
        int n;
        cin >> n;
        int ar[n];
        map<int, int> mp;
        loop(i, 0, n) cin >> ar[i], mp[ar[i]]++;
        if (mp[ar[1]] == n)
        {
            cout << 0 << '\n';
        }
        else
        {
            int max = 0;
            loop(i, 0, n) if (mp[ar[i]] > max) max = mp[ar[i]];
            int need = n - max;
            int sz = max;
            while (sz < n)
            {
                need++;
                sz *= 2;
            }
            cout << need << '\n';
        }
    }
    return 0;
}