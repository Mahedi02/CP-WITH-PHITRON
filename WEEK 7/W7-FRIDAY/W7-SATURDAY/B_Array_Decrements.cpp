// // AUTHOR: MAHEDI HASAN ANIK
// // CREATED: 2024-05-04 11:16:10
// #include <bits/stdc++.h>
// #define ll long long
// #define vec vector<ll>
// #define sorta(x) sort(x.begin(), x.end());
// #define sortd(x) sort(x.begin(), x.end(), greater<int>());
// #define loop(i, s, n) for (int i = s; i < n; i++)
// #define input(x)                \
//     vec x(n);                   \
//     for (int i = 0; i < n; i++) \
//         cin >> x[i];
// #define output()     \
//     for (ll val : v) \
//         cout << val << " ";
// #define test  \
//     {         \
//     }         \
//     ll t;     \
//     cin >> t; \
//     while (t--)
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define I_AM_SPEED                \
//     ios ::sync_with_stdio(false); \
//     cin.tie(NULL);
// using namespace std;
// int main()
// {
//     I_AM_SPEED;
//     test
//     {
//         ll n;
//         cin >> n;
//         vector<pair<int, int>> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i].first;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i].second;
//         }
//         int mx = 0;
//         for (auto it : v)
//         {
//             mx = max(mx, abs(it.first - it.second));
//         }
//         bool ans = true;
//         for (auto it : v)
//         {
//             if (it.first - mx == it.second)
//             {
//                 continue;
//             }
//             else if (it.first - mx < 0 && it.second == 0)
//             {
//                 continue;
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//         (ans) ? yes : no;
//     }
//     return 0;
// }
// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-04 16:41:53
#include <bits/stdc++.h>
#define ll long long
#define vec vector<int>
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
        vec v(n);
        vec v1(n);
        loop(i, 0, n) cin >> v[i];
        loop(i, 0, n) cin >> v1[i];
        int diff = 0;
        loop(i, 0, n)
        {
            diff = max(diff, (v[i] - v1[i]));
        }
        bool ans = true;
        loop(i, 0, n)
        {
            if (v1[i] != max(v[i] - diff, 0))
            {
                ans = false;
                break;
            }
        }
        (ans) ? yes : no;
    }
    return 0;
}