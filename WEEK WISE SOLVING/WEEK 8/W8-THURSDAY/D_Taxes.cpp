/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-05-16 || 22:41:49 */
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
bool prime(ll n)
{
    if (n == 1)
    {
        return false;
    }
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    I_AM_SPEED;
    ll n;
    cin >> n;
    if (prime(n))
    {
        cout << 1 << '\n';
    }
    else if (even(n))
    {
        cout << 2 << '\n';
    }
    else
    {
        if (prime(n - 2))
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 3 << '\n';
        }
    }
    return 0;
}