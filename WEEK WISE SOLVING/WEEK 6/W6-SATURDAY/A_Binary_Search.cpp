// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-27 10:34:39
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
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
    int n, k;
    cin >> n >> k;
    vec v(n);
    loop(i, 0, n) cin >> v[i];
    while (k--)
    {
        int a;
        cin >> a;
        int l = 0, r = n - 1;
        bool ans = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == a)
            {
                ans = true;
                break;
            }
            else if (a < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        (ans) ? yes : no;
    }
    return 0;
}