// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-23 03:12:13
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
    set<char> good = {'T', 'i', 'm', 'u', 'r'};
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> good2;
        for (char c : s)
            good2.insert(c);
        cout << (good == good2 && n == 5 ? "YES" : "NO") << '\n';
    }
    return 0;
}