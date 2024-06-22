#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            cout << i << '\n';
        }
    }
    return 0;
}