#include <bits/stdc++.h>
#define ll long long
#define loop(i, s, n) for (int i = s; i < n; i++)
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    vector<ll> v;
    loop(i, 0, n)
    {
        ll a;
        cin >> a;
        if (a != s)
            v.push_back(a);
    }

    for (int b : v)
    {
        cout << b << " ";
    }
    cout << '\n';
    return 0;
}