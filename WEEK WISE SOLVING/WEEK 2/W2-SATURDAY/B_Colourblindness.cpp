// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-23 13:52:05
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
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0;
        bool ans = false;
        while (i < n)
        {
            if ((s1[i] == 'G' || s1[i] == 'B') && s2[i] == 'R')
            {
                ans = true;
                break;
            }
            else if ((s2[i] == 'G' || s2[i] == 'B') && s1[i] == 'R')
            {
                ans = true;
                break;
            }
            i++;
        }
        cout << (ans ? "NO" : "YES") << '\n';
    }
    return 0;
}