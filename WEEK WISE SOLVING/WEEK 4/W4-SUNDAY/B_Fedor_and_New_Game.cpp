// // AUTHOR: MAHEDI HASAN ANIK
// // CREATED: 2024-04-14 12:17:47
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
//     int n, m, ka;
//     cin >> n >> m >> ka;
//     vector<int> a(m + 1);
//     for (int i = 0; i <= m; i++)
//     {
//         cin >> a[i];
//     }
//     vector<vector<int>> mk;
//     for (int i = 0; i <= m; i++)
//     {
//         vector<int> v;
//         for (int k = 0; k < n; k++)
//         {
//             if ((a[i] >> k) & 1)
//             {
//                 v.push_back(1);
//             }
//             else
//             {
//                 v.push_back(0);
//             }
//         }
//         mk.push_back(v);
//     }
//     vector<int> fedor = mk[m];
//     int ans = 0;
//     for (int i = 0; i < mk.size() - 1; i++)
//         h
//         {
//             vector<int> v = mk[i];
//             int cnt = 0;
//             for (int k = 0; k < n; k++)
//             {
//                 if (fedor[k] != v[k])
//                 {
//                     cnt++;
//                 }
//             }
//             if (cnt <= ka)
//             {
//                 ans++;
//             }
//         }
//     cout << ans << '\n';
//     return 0;
// }

// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-14 12:59:45
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
// int v[10000];
using namespace std;
int main()
{
    I_AM_SPEED;
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    int ans = 0;
    for (int i = 0; i <= m; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cnt += (v[i] >> j & 1) != (v[m] >> j & 1);
        }
        ans += cnt <= k;
    }
    cout << ans << '\n';
    return 0;
}