// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-06 23:26:55
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define Faster                    \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        loop(i, 0, n)
        {
            cin >> a[i];
            XOR ^= a[i];
        }
        int ans = XOR;
        loop(i, 0, n)
        {
            ans = min(ans, (XOR ^ a[i]));
        }
        cout << ans << '\n';
    }
    return 0;
}