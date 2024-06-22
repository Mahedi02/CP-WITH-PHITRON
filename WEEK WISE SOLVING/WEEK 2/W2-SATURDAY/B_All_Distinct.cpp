// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-23 12:15:48
#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        int m = s.size();
        if ((n - m) % 2 != 0)
        {
            m--;
        }
        cout << m << '\n';
    }
    return 0;
}