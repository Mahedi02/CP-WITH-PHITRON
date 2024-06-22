// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-05 15:27:22
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll> v(n)
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
using namespace std;
int f(string a)
{
    if (a == "M")
    {
        return 0;
    }
    else if (a.back() == 'L')
    {
        return a.size();
    }
    else
    {
        return -a.size();
    }
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s >> s1;
        int a = f(s);
        int b = f(s1);
        if (a > b)
        {
            cout << ">\n";
        }
        else if (a < b)
        {
            cout << "<\n";
        }
        else
        {
            cout << "=\n";
        }
    }
    return 0;
}