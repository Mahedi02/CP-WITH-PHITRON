// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-06 23:21:04
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
    Faster int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = n; i > 0; i--)
        {
            cout << i << " ";
        }
    }
    return 0;
}