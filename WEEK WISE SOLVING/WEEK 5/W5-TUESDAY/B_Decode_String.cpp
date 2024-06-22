// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-23 19:02:02
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
        string s;
        cin >> s;
        string ans;
        int i = n - 1;
        while (i >= 0)
        {
            if (s[i] == '0')
            {
                string k = s.substr(i - 2, 2);
                i -= 3;
                char c = char((stoi(k) - 1) + 'a');
                ans += c;
            }
            else
            {
                char k = s[i];
                char c = char(int(s[i]) + 48);
                ans += c;
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}