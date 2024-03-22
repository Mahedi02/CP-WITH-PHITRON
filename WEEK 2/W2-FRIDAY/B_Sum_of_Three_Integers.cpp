#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    ll cnt = 0;
    loop(i, 0, k)
    {
        loop(j, 0, k)
        {
            int a = (s - i - j);
            if (a >= 0 && a <= k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}