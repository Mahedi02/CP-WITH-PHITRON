#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        int op = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long now = 1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > now)
            {
                op += (a[i] - now);
                now = a[i] + 1;
            }
            else
            {
                now++;
            }
        }
        cout << op << '\n';
    }
    return 0;
}