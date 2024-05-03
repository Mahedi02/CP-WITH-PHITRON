// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-03 21:59:33
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input()                 \
    vec v(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define output()     \
    for (ll val : v) \
        cout << val << " ";
#define test  \
    {         \
    }         \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    test
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int one = count(s.begin(), s.end(), '1');
        int zero = n - one;
        int ans = min(one, zero);
        (ans % 2 == 0) ? cout << "Ramos" << '\n' : cout << "Zlatan" << '\n';
    }
    return 0;
}