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
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << '+' << '\n';
        }
        else if (a - b == c)
        {
            cout << '-' << '\n';
        }
    }
    return 0;
}