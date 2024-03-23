// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-23 14:12:54
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
        stack<char> s;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == ')')
            {
                if (s.empty())
                    ans++;
                else
                    s.pop();
            }
            else
                s.push(c);
        }
        cout << ans << '\n';
    }
    return 0;
}