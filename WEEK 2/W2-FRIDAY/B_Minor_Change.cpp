#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    ll cnt = 0;
    ll len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}