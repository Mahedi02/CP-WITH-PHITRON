// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-01 00:02:21
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        map<string, int> mp;
        loop(i, 0, n)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            bool ans = false;
            for (int j = 0; j < a[i].size(); j++)
            {
                string ab, bc;
                for (int k = 0; k < j; k++)
                {
                    ab += a[i][k];
                }
                for (int k = j; k < a[i].size(); k++)
                {
                    bc += a[i][k];
                }
                if (mp[ab] > 0 && mp[bc] > 0)
                {
                    ans = true;
                    break;
                }
            }
            cout << ans;
        }
        cout << '\n';
    }
    return 0;
}