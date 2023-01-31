#include <bits/stdc++.h>
using namespace std;

int num[114514];
int c[114514], d[15][4];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        for (int j = t1; j <= t2; j++)
        {
            c[j] = t3;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> d[i][0] >> d[i][1] >> d[i][2] >> d[i][3];
    }
    int ans = 1e9;
    for (int i = 0; i < (int)pow(2, m); i++)
    {
        memset(num, 0, sizeof(num));
        int x = i, tans = 0;
        for (int j = 0; j < m; j++)
        {
            if (x & (1 << j))
            {
                for (int k = d[j][0]; k <= d[j][1]; k++)
                {
                    num[k] += d[j][2];
                }
                tans += d[j][3];
            }
        }
        int can = 1;
        for (int j = 1; j <= 100; j++)
        {
            if (num[j] < c[j])
            {
                can = 0;
            }
        }
        if (can)
        {
            ans = min(ans, tans);
        }
    }
    cout << ans;
}
// #include <bits/stdc++.h>
// using namespace std;

// int a[114514];
// int b[114514], e[15][4];

// int main()
// {
//     int x, y;
//     cin >> x >> y;
//     for (int i = 1; i <= x; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         for (int j = u; j <= v; j++)
//         {
//             b[j] = w;
//         }
//     }
//     for (int i = 0; i < y; i++)
//     {
//         cin >> e[i][0] >> e[i][1] >> e[i][2] >> e[i][3];
//     }
//     int res = 1e9;
//     for (int i = 0; i < (int)pow(2, y); i++)
//     {
//         memset(a, 0, sizeof(a));
//         int z = i, tres = 0;
//         for (int j = 0; j < y; j++)
//         {
//             if (z & (1 << j))
//             {
//                 for (int k = e[j][0]; k <= e[j][1]; k++)
//                 {
//                     a[k] += e[j][2];
//                 }
//                 tres += e[j][3];
//             }
//         }
//         int c = 1;
//         for (int j = 1; j <= 100; j++)
//         {
//             if (a[j] < b[j])
//             {
//                 c = 0;
//             }
//         }
//         if (c)
//         {
//             res = min(res, tres);
//         }
//     }
//     cout << res;
// }