#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            char a;
            cin >> a;
            s.push_back(a);
            if (a == 'B')
            {
                v.push_back(i);
            }
        }
        if (v.size() - 1 > 0)
        {
            cout << v.back() - v.front() + 1 << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}