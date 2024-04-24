// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-24 11:58:28
#include <bits/stdc++.h>
#define ll long long
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    I_AM_SPEED;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vec v(n);
        loop(i, 0, n)
        {
            cin >> v[i];
        }
        bool found = false;
        vec v1;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                if ((v[i] < v[j]) && (v[j] > v[j + 1]))
                {
                    found = true;
                    v1.push_back(i + 1);
                    v1.push_back(j + 1);
                    v1.push_back(j + 2);
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }
        if (found)
        {
            yes;
            for (int val : v1)
            {
                cout << val << " ";
            }
            cout << '\n';
        }
        else
        {
            no;
        }
    }
    return 0;
}