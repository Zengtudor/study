#include <bits/stdc++.h>
using namespace std;

int num[114514];
int c[114514], d[15][4];
char s[114514];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s + 1);
        int l = strlen(s + 1);
        int a = 0, b = 0, c = 0, d = 0;
        for (int j = 1; j <= l - 2; j++)
        {
            if (s[j] == 'M' && s[j + 1] == 'O' && s[j + 2] == 'O')
            {
                a = 1;
            }
            if (s[j] == 'O' && s[j + 1] == 'O' && s[j + 2] == 'M')
            {
                b = 1;
            }
            if (s[j] == 'M' && s[j + 1] == 'O' && s[j + 2] == 'M')
            {
                c = 1;
            }
            if (s[j] == 'O' && s[j + 1] == 'O' && s[j + 2] == 'O')
            {
                d = 1;
            }
        }

        if (a == 1)
        {
            cout << l - 3 << endl;
        }
        else if (c == 1)
        {
            cout << l - 2 << endl;
        }
        else if (d == 1)
        {
            cout << l - 2 << endl;
        }
        else if (b == 1)
        {
            cout << l - 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int a[114514];
// int b[114514], c[15][4];
// char s[114514];

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%s", s + 1);
//         int l = strlen(s + 1);
//         int x = 0, y = 0, z = 0, w = 0;
//         for (int j = 1; j <= l - 2; j++)
//         {
//             if (s[j] == 'M' && s[j + 1] == 'O' && s[j + 2] == 'O')
//             {
//                 x = 1;
//             }
//             if (s[j] == 'O' && s[j + 1] == 'O' && s[j + 2] == 'M')
//             {
//                 y = 1;
//             }
//             if (s[j] == 'M' && s[j + 1] == 'O' && s[j + 2] == 'M')
//             {
//                 z = 1;
//             }
//             if (s[j] == 'O' && s[j + 1] == 'O' && s[j + 2] == 'O')
//             {
//                 w = 1;
//             }
//         }
//         if (x == 1)
//         {
//             cout << l - 3 << endl;
//         }
//         else if (z == 1)
//         {
//             cout << l - 2 << endl;
//         }
//         else if (w == 1)
//         {
//             cout << l - 2 << endl;
//         }
//         else if (y == 1)
//         {
//             cout << l - 1 << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
// }