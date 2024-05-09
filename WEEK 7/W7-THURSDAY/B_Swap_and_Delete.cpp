/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-05-09 || 21:12:25 */
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
    test
    {
        string s;
        cin >> s;
        ll cnt_0 = count(s.begin(), s.end(), '0');
        ll cnt_1 = count(s.begin(), s.end(), '1');
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (cnt_0 > 0)
                {
                    cnt_0--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (cnt_1 > 0)
                {
                    cnt_1--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << cnt_0 + cnt_1 << '\n';
    }
    return 0;
}