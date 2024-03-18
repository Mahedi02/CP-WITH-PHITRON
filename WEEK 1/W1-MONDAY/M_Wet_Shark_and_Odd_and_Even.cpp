#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll sum = 0;
    ll a = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        sum += b;
        if (b % 2 != 0)
        {
            a = min(a, b);
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {
        cout << sum - a << '\n';
    }
    return 0;
}