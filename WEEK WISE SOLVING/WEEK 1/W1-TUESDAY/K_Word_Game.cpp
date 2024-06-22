#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
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
        map<string, int> mp;
        vector<string> v(n), v1(n), v2(n);
        loop(i, 0, n) cin >> v[i], mp[v[i]]++;
        loop(i, 0, n) cin >> v1[i], mp[v1[i]]++;
        loop(i, 0, n) cin >> v2[i], mp[v2[i]]++;
        int first = 0, second = 0, third = 0;
        for (auto a : v)
        {
            if (mp[a] == 2)
                first++;
            else if (mp[a] == 1)
                first += 3;
        }
        for (auto a : v1)
        {
            if (mp[a] == 2)
                second++;
            else if (mp[a] == 1)
                second += 3;
        }
        for (auto a : v2)
        {
            if (mp[a] == 2)
                third++;
            else if (mp[a] == 1)
                third += 3;
        }
        cout << first << " " << second << " " << third << '\n';
    }
    return 0;
}