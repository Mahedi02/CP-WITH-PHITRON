// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-26 11:49:01
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
    vector<ll> ar(n);
    loop(i, 0, n) cin >> ar[i];
    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += ar[r];
        if (sum <= s)
        {
            ans = max(ans, (r - l + 1));
        }
        else
        {
            sum -= ar[l];
            l++;
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}