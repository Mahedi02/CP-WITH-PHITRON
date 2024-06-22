// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-29 23:12:19
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n)
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
        string s;
        cin >> s;
        string m;
        string trgt = "meow";
        for (char &c : s)
        {
            c = tolower(c);
        }
        loop(i, 0, n)
        {
            if (s[i] != s[i + 1])
                m.push_back(s[i]);
        }
        m == trgt ? yes : no;
    }
    return 0;
}