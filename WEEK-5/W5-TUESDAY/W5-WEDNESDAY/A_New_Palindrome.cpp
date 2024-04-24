// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-24 09:54:16
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
        int cnt = 0;
        map<char, int> mp;
        set<char> st;
        for (char c : s)
        {
            mp[c]++;
            st.insert(c);
        }
        for (char c : st)
        {
            if (mp[c] >= 2)
                cnt++;
        }
        (cnt >= 2) ? yes : no;
    }
    return 0;
}