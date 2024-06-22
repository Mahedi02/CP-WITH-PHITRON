#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    int n;
    cin >> n;
    while (n--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll s = abs(a - 1);
        ll s1 = abs(b - c) + abs(c - 1);
        if (s < s1)
        {
            cout << 1 << endl;
        }
        else if (s1 < s)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}