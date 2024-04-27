// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-27 12:02:36
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
    int n;
    cin >> n;
    vec v(n);
    loop(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end());
    int k;
    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        auto it = lower_bound(v.begin(), v.end(), l);
        int ab = it - v.begin();
        auto it2 = upper_bound(v.begin(), v.end(), r);
        int bc = it2 - v.begin();
        cout << abs(bc - ab) << " ";
    }
    return 0;
}