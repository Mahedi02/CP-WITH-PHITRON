// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-25 15:38:48
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vec v(n);
        loop(i, 0, n)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}