// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-23 20:05:02
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, mid, ans = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key >= a[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}