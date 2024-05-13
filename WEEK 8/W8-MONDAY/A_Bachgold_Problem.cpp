/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-05-13 || 15:36:12 */
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define output(x)    \
    for (ll val : x) \
        cout << val << " ";
#define test  \
    {         \
    }         \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)
#define pb push_back
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    int n;
    cin >> n;
    vec v;
    int ans = -1;
    if (n % 2 == 0)
    {
        ans = n / 2;
        for (int i = 0; i < ans; i++)
        {
            v.push_back(2);
        }
    }
    else
    {
        ans = n / 2;
        for (int i = 0; i < ans - 1; i++)
        {
            v.push_back(2);
        }
        v.push_back(3);
    }
    cout << ans << '\n';
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << '\n';
    return 0;
}