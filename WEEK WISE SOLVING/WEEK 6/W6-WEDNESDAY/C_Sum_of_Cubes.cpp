// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-05-01 16:39:00
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
const int maxN = 1e4;
int main()
{
    I_AM_SPEED;
    vec pw;
    for (int i = 1; i <= maxN; i++)
    {
        pw.push_back(pow(i, 3));
    }
    test
    {
        ll x;
        cin >> x;
        bool found = false;
        for (int i = 0; i < maxN; i++)
        {
            if (pw[i] >= x)
            {
                break;
            }
            int l = 0, r = maxN - 1, mid;
            long long need = x - pw[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok)
            {
                found = true;
                break;
            }
        }
        (found) ? yes : no;
    }
    return 0;
}