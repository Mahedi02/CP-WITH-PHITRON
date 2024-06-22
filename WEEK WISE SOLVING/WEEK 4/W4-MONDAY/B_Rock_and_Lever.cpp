// // AUTHOR: MAHEDI HASAN ANIK
// // CREATED: 2024-04-14 16:02:57
// #include <bits/stdc++.h>
// #define ll long long
// #define vec vector<ll>
// #define loop(i, s, n) for (int i = s; i < n; i++)
// #define yes cout << "YES\n";
// #define no cout << "NO\n";
// #define I_AM_SPEED                \
//     ios ::sync_with_stdio(false); \
//     cin.tie(NULL);
// using namespace std;
// int main()
// {
//     I_AM_SPEED;
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         map<int, int> mp;
//         loop(i, 0, n)
//         {
//             int x;
//             cin >> x;
//             mp[__lg(x)]++;
//         }
//         ll ans = 0;
//         for (auto [x, y] : mp)
//         {
//             ans += (1LL * y * (y - 1)) / 2;
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int lg(int x)
{
    int pos = 0;
    while (x > 1)
    {
        x >>= 1;
        pos++;
    }
    return pos;
}

int main()
{
    int x;
    cin >> x;
    cout << lg(x) << endl;
    return 0;
}
