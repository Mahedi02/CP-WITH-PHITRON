#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int ans = 0;
    ans += max(a, b);
    if (a > b)
    {
        a--;
    }
    else
    {
        b--;
    }
    ans += max(a, b);
    cout << ans << '\n';
    return 0;
}