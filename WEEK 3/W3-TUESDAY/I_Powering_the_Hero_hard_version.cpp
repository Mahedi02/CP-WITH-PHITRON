// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-02 21:59:23
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n)
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        priority_queue<ll> pq;
        ll ans = 0;
        loop(i, 0, n)
        {
            ll val;
            cin >> val;
            if (val != 0)
            {
                pq.push(val);
            }
            else
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}