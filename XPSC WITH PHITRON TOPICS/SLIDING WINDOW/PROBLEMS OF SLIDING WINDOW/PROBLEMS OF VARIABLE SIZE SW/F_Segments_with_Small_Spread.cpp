// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-26 16:13:43
#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    loop(i, 0, n) cin >> v[i];
    ll l = 0, r = 0, ans = 0;
    multiset<ll> ml;
    while (r < n)
    {
        ml.insert(v[r]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if ((mx - mn) <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l < r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if ((mx - mn) <= k)
                {
                    break;
                }
                auto it = ml.find(v[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}