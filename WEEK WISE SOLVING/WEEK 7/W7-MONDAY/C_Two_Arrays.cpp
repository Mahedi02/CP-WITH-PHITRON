// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-06 22:56:40
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
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
        input(v1);
        sorta(v);
        sorta(v1);
        bool ans = true;
        loop(i, 0, n)
        {
            int diff = v1[i] - v[i];
            if (diff < 0 || diff > 1)
            {
                ans = false;
                break;
            }
        }
        // output(v);
        // cout << '\n';
        // output(v1);
        (ans == true) ? yes : no;
    }
    return 0;
}