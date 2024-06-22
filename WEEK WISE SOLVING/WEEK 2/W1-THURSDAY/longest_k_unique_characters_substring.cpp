// www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
// class Solution
// {
// public:
//     int longestKSubstr(string s, int k)
//     {
//         // your code here
//         int l = 0, r = 0, ans = -1;
//         map<char, int> mp;
//         int sz = s.size();
//         while (r < sz)
//         {
//             mp[s[r]]++;
//             while (mp.size() > k && l <= r)
//             {
//                 mp[s[l]]--;
//                 if (mp[s[l]] == 0)
//                 {
//                     mp.erase(s[l]);
//                 }
//                 l++;
//             }
//             if (mp.size() == k)
//             {
//                 ans = max(ans, (r - l + 1));
//             }
//             r++;
//         }
//         return ans;
//     }
// };