// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-16 19:17:29
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
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
        int XOR = 0;
        loop(i, 0, n)
        {
            int a;
            cin >> a;
            XOR ^= a;
        }
        if (n % 2 == 0 && XOR != 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << XOR << '\n';
        }
    }
    return 0;
}