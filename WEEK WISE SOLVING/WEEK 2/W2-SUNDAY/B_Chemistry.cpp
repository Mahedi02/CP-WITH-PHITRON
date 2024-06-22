// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-24 02:58:37
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        loop(i, 0, n) mp[s[i]]++;
        int ans = 0;
        for (auto &it : mp)
        {
            ans += (it.second % 2 == 1);
        }
        (ans <= k + 1) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}