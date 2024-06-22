// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-05 22:29:48
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
        ll sum = 1;
        while (n != 1)
        {

            sum += n;
            n = n / 2;
        }
        cout << sum << '\n';
    }
    return 0;
}