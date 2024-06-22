// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-31 15:47:46
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n)
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
using namespace std;
ll Right(int i, int j, int n, int m, vector<vector<int>> &a)
{
    ll rightsum = 0;
    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        rightsum += a[i][j];
        i--, j++;
    }
    return rightsum;
}
ll Left(int i, int j, int n, int m, vector<vector<int>> &a)
{
    ll leftsum = 0;
    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        leftsum += a[i][j];
        i--, j--;
    }
    return leftsum;
}
ll Downr(int i, int j, int n, int m, vector<vector<int>> &a)
{
    ll rsum = 0;
    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        rsum += a[i][j];
        i++, j++;
    }
    return rsum;
}
ll Downl(int i, int j, int n, int m, vector<vector<int>> &a)
{
    ll lsum = 0;
    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        lsum += a[i][j];
        i++, j--;
    }
    return lsum;
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        loop(i, 0, n)
        {
            loop(j, 0, m)
            {
                cin >> a[i][j];
            }
        }
        ll sum = 0;
        loop(i, 0, n)
        {
            loop(j, 0, m)
            {
                ll sum1 = a[i][j] +
                          Right(i - 1, j + 1, n, m, a) +
                          Left(i - 1, j - 1, n, m, a) +
                          Downr(i + 1, j + 1, n, m, a) +
                          Downl(i + 1, j - 1, n, m, a);
                sum = max(sum, sum1);
            }
        }
        cout << sum << '\n';
    }
    return 0;
}