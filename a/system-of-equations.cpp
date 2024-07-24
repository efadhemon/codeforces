#include <bits/stdc++.h>
using namespace std;

bool checkEq(int a, int b, int n, int m)
{
    return (a * a) + b == n && a + (b * b) == m;
}

int main()
{

    int n, m;
    cin >> n >> m;

    int max = n > m ? n : m;

    int count = 0;

    for (int i = 0; i <= max; i++)
    {

        for (int j = 0; j <= max; j++)
        {

            if (checkEq(i, j, n, m))
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}