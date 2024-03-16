#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (c < a)
    {
        cout << 0 << '\n';
    }
    else
    {
        float d = c + 0.5;
        int ans = d / a;
        cout << ans * b << '\n';
    }
    return 0;
}