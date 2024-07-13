#include <iostream>
using namespace std;

int main()
{

    int n = 4;
    int shoes[n];

    for (int i = 0; i < n; i++)
    {
        cin >> shoes[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            if (shoes[i] == shoes[j])
            {
                s++;
            }
        }
        if (s >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
