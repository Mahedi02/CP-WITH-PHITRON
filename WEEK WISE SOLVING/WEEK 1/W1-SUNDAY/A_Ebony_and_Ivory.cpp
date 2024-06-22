#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    for (int i = 0; i <= c / b; i++)
    {
        if ((c - (b * i)) % a == 0)
        {
            ans = true;
        }
    }
    ans ? cout << "Yes" << '\n' : cout << "No" << '\n';
    return 0;
}