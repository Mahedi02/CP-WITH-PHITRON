// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-26 20:42:24
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
    ll l = 0, r = 0, ans = 0, sum = 0;
    sum = v[r];
    while (r < n)
    {
        if (sum >= s)
        {
            ans += n - r;
            sum -= v[l];
            l++;
        }
        else
        {
            r++;
            sum += v[r];
        }
    }
    cout << ans << '\n';
    return 0;
}