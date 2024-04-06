// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-26 21:31:43
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n)
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vec;
    loop(i, 0, n) cin >> v[i];
    map<int, int> mp;
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        mp[v[r]]++;
        while (mp.size() > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                mp.erase(v[l]);
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout << ans << '\n';
    return 0;
}