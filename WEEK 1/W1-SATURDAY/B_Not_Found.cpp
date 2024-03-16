#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int freq[26] = {0};
    for (char a : s)
    {
        freq[a - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << char(i + 'a') << '\n';
            return 0;
        }
    }
    cout << "None" << '\n';
    return 0;
}