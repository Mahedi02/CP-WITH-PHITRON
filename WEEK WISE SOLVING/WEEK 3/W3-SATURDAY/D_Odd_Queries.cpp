// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-30 11:43:55
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n + 1)
#define loop(i, s, n) for (int i = s; i <= n; i++)
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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n + 1);
        vector<ll> prefix(n + 1);
        v[0] = prefix[0] = 0;
        ll sum = 0;
        loop(i, 1, n)
        {
            cin >> v[i];
            sum += v[i];
            prefix[i] = sum;
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum2 = prefix[r] - prefix[l - 1];
            ll ele = r - l + 1;
            ll sum3 = ele * k;
            ll sum4 = abs(sum2 - sum3);
            sum += sum4;
            if (sum % 2 == 1)
                yes else no;
            sum -= sum4;
        }
    }
    return 0;
}