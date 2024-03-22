// vector<long long> printFirstNegativeInteger(long long int a[],
//                                             long long int n, long long int k)
// {
//     vector<long long> v;
//     queue<long long> window;
//     int l = 0;
//     int r = 0;
//     for (r = 0; r < n; r++)
//     {
//         if (a[r] < 0)
//         {
//             window.push(a[r]);
//         }
//         if (r - l + 1 == k)
//         {
//             if (!window.empty())
//             {
//                 v.push_back(window.front());
//                 if (a[l] == window.front())
//                 {
//                     window.pop();
//                 }
//             }
//             else
//             {
//                 v.push_back(0);
//             }
//             ++l;
//         }
//     }
//     return v;
// }