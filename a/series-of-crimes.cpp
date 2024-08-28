// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int row;
//     int col;
//     cin >> row >> col;

//     char map[row][col];

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             cin >> map[i][j];
//         }
//     }

//     int xRow, xCol;
//     int frow, fcount, fcountPos;
//     int lrow, lcount, lcountPos;
//     for (int i = 1; i <= row; i++)
//     {

//         for (int j = 1; j <= col; j++)
//         {
//             if (map[i][j] == '*')
//             {

//                 if (frow == 0)
//                 {
//                     frow = i;
//                 }

//                 if (frow == i)
//                 {
//                     fcount++;
//                     fcountPos = j;
//                 }
//                 else
//                 {

//                     lrow = i;
//                     lcount++;
//                     lcountPos = j;
//                 }
//             }
//         }
//     }

//     cout << frow << fcount << fcountPos << " " << lrow << lcount << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int x = 0, y = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            char ch;
            cin >> ch;
            if (ch == '*')
            {
                x = x ^ i;
                y = y ^ j;
            }
        }
    }

    cout << x << " " << y << endl;
    return 0;
}
