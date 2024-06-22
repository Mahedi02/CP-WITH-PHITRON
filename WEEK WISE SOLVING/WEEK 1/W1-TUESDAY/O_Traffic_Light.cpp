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
        string s;
        char a;
        cin >> n >> a >> s;
        int ans = 0;
        s += s;
        if (a == 'g')
        {
            cout << 0 << '\n';
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == a)
            {
                for (int j = i + 1; j < 2 * n; j++)
                {
                    if (s[j] == 'g')
                    {
                        ans = max(j - i, ans);
                        i = j;
                        break;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}