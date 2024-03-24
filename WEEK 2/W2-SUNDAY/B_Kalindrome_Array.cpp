// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-24 01:41:59
#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
bool solve(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    bool ans = true;
    while (i < j)
    {
        if (v[i] != v[j])
        {
            ans = false;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n];
        loop(i, 0, n) cin >> ar[i];
        bool flag = true;
        int a, b;
        if (n == 1 || n == 2)
        {
            cout << "YES" << '\n';
        }
        else
        {
            int i = 0;
            int j = n - 1;
            while (i < j)
            {
                if (ar[i] != ar[j])
                {
                    a = ar[i];
                    b = ar[j];
                    flag = false;
                    break;
                }
                i++;
                j--;
            }
            if (flag)
            {
                cout << "YES" << '\n';
            }
            else
            {
                vector<int> v1, v2;
                loop(i, 0, n) if (ar[i] != a) v1.push_back(ar[i]);
                loop(i, 0, n) if (ar[i] != b) v2.push_back(ar[i]);
                bool ans1 = solve(v1);
                bool ans2 = solve(v2);
                if (ans1 || ans2)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
    }
    return 0;
}