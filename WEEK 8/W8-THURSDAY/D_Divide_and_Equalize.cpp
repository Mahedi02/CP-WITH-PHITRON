/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-05-15 || 13:11:58 */
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
        int n;
        cin >> n;
        input(v);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                if (v[i] % j == 0)
                {
                    while (v[i] % j == 0)
                    {
                        mp[j]++;
                        v[i] /= j;
                    }
                }
            }
            if (v[i] > 1)
            {
                mp[v[i]]++;
            }
        }
        bool ans = true;
        for (auto it : mp)
        {
            if (it.second % n != 0)
            {
                ans = false;
            }
        }
        (ans) ? yes : no;
    }
    return 0;
}