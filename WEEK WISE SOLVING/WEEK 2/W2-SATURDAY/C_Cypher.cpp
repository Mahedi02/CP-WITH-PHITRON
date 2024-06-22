// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-03-22 21:24:49
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
        int ar[n];
        loop(i, 0, n) cin >> ar[i];
        int cnt_u = 0;
        int cnt_d = 0;
        vector<int> v;
        loop(i, 0, n)
        {
            int a;
            cin >> a;
            loop(j, 0, a)
            {
                char c;
                cin >> c;
                if (c == 'D')
                {
                    cnt_d++;
                }
                else
                {
                    cnt_u++;
                }
            }
            if (cnt_d > cnt_u)
            {
                int dif = cnt_d - cnt_u;
                while (dif > 0)
                {
                    if (ar[i] == 9)
                    {
                        ar[i] = 0;
                    }
                    else
                    {
                        ar[i]++;
                    }
                    dif--;
                }
                v.push_back(ar[i]);
            }
            else
            {
                int dif = cnt_u - cnt_d;
                while (dif > 0)
                {
                    if (ar[i] == 0)
                    {
                        ar[i] = 9;
                    }
                    else
                    {
                        ar[i]--;
                    }
                    dif--;
                }
                v.push_back(ar[i]);
            }
            cnt_u = 0, cnt_d = 0;
        }
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    return 0;
}
