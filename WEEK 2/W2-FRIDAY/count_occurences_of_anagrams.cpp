// class Solution
// {
// public:
//     int search(string pat, string txt)
//     {
//         // code here
//         int p = pat.size();
//         int t = txt.size();
//         int cnt = 0;
//         int freq1[26] = {0};
//         for (char a : pat)
//         {
//             freq1[a - 'a']++;
//         }
//         int l = 0, r = 0;
//         int freq2[26] = {0};
//         while (r < t)
//         {
//             freq2[txt[r] - 'a']++;
//             if ((r - l + 1) == p)
//             {
//                 bool valid = true;
//                 for (int i = 0; i < 26; i++)
//                 {
//                     if (freq1[i] != freq2[i])
//                     {
//                         valid = false;
//                         break;
//                     }
//                 }
//                 if (valid)
//                 {
//                     cnt++;
//                 }
//                 freq2[txt[l] - 'a']--;
//                 l++;
//             }
//             r++;
//         }
//         return cnt;
//     }
// };