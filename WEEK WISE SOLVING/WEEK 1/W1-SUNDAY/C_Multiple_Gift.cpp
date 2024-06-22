#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    ll s, e;
    cin >> s >> e;
    int x = 0;
    while (s <= e)
    {
        s *= 2;
        x++;
    }
    cout << x << '\n';
    return 0;
}