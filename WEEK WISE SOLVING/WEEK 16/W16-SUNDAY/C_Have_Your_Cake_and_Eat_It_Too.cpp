/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2024-07-16 || 22:30:13 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define output(x)           \
    for (ll val : x)        \
        cout << val << " "; \
    cout << '\n';
#define test  \
    {         \
    }         \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)
#define pb push_back
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
int go(vector<int> &a, int start, ll need)
{
    int r = start;
    ll cur_sum = 0;
    while (r < a.size())
    {
        cur_sum += a[r];
        if (cur_sum >= need)
            break;
        r++;
    }
    return r;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    ll tot = accumulate(a[0].begin(), a[0].end(), 0ll);
    ll need = (tot + 2) / 3;

    vector<int> order = {0, 1, 2};

    do
    {
        int first = order[0];
        int second = order[1];
        int third = order[2];

        int r1 = go(a[first], 0, need);
        int r2 = go(a[second], r1 + 1, need);
        int r3 = go(a[third], r2 + 1, need);

        if (r3 >= n)
            continue;

        vector<array<int, 3>> ans = {{first, 0, r1}, {second, r1 + 1, r2}, {third, r2 + 1, r3}};
        sort(ans.begin(), ans.end());

        for (int i = 0; i < 3; i++)
        {
            cout << ans[i][1] + 1 << " " << ans[i][2] + 1 << " ";
        }
        cout << "\n";
        return;
    } while (next_permutation(order.begin(), order.end()));

    cout << "-1\n";
}
int main()
{
    I_AM_SPEED;
    test
    {
        solve();
    }
    return 0;
}