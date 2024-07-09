/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-07-08 || 21:19:33 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define output(x)           \
    for (ll val : x)        \
        cout << val << " "; \
    cout << '\n';
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
bool isvowel(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        return true;
    }
    return false;
}
int main()
{
    I_AM_SPEED;
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size())
    {
        no;
    }
    else
    {
        bool ans = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (isvowel(s[i]) != isvowel(t[i]))
            {
                ans = false;
                break;
            }
            if (isvowel(t[i]) != isvowel(s[i]))
            {
                ans = false;
            }
        }
        (ans) ? yes : no;
    }
    return 0;
}