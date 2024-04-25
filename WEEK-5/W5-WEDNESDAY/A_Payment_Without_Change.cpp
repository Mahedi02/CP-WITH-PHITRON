// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-24 12:15:26
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll aa = min((s / n), a);
        ll ans = s - aa * n;
        (ans <= b) ? yes : no;
    }
    return 0;
}