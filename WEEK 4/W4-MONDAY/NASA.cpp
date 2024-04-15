// AUTHOR: MAHEDI HASAN ANIK
// CREATED: 2024-04-14 21:31:05
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
const int maxN = (1 << 15);
vector<int> palindromes;
void make_palin()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;
        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] != s[len - i - 1])
            {
                ok = false;
            }
        }
        if (ok)
        {
            palindromes.push_back(i);
        }
    }
}
int main()
{
    I_AM_SPEED;
    make_palin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(maxN), a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }
        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindromes.size(); j++)
            {
                int ja_ase = (a[i] ^ palindromes[j]);
                ans += cnt[ja_ase];
            }
        }
        cout << ans / 2 << '\n';
    }
    return 0;
}