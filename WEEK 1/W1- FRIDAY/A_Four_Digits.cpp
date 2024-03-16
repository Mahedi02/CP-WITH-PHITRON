#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if (s.length() == 4)
    {
        cout << s << '\n';
    }
    else
    {
        int n = 4 - s.length();
        for (int i = 0; i < n; i++)
        {
            cout << 0;
        }
        cout << s << '\n';
    }
    return 0;
}