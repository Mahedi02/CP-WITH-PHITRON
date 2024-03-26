// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-26 16:28:30
#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    loop(i, 0, n) cin >> v[i];
    ll l = 0, r = 0, sum = 0, ans = INT_MAX;
    sum = v[0];
    while (r < n)
    {
        if (sum >= s)
        {
            ans = min(ans, (r - l + 1));
            sum -= v[l];
            l++;
        }
        else
        {
            r++;
            sum += v[r];
        }
    }
    if (ans != INT_MAX)
    {
        cout << ans << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
    return 0;
}