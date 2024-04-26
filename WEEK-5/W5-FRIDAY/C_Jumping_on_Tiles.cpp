// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-26 14:42:00
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
        string s;
        cin >> s;
        vector<pair<char, int>> v;
        int n = s.size();
        char mx = max(s[0], s[n - 1]);
        char mn = min(s[0], s[n - 1]);
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= mn && s[i] <= mx)
            {
                v.push_back({s[i], i});
            }
        }
        sort(v.begin(), v.end(), [&](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });
        if (v.size() > 2)
        {
            sort(v.begin() + 1, v.begin() + v.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                 {
                if(s[0]>s[n-1])
                {
                    return a.first>b.first;
                }
                else
                {
                    return a.first<b.first;
                } });
        }
        vector<int> path;
        path.push_back(1);
        ll jumps = 0;
        for (int i = 1; i < v.size(); i++)
        {
            jumps += abs(v[i - 1].first - v[i].first);
            path.push_back(v[i].second + 1);
        }
        cout << jumps << " " << path.size() << '\n';
        for (int val : path)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}