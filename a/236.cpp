#include <bits/stdc++.h>
using namespace std;

int main()
{

    string userName;
    cin >> userName;

    int nameSize = userName.size();
    int count = nameSize;

    for (int i = 0; i < nameSize; i++)
    {
        int s = 0;
        for (int j = i; j < nameSize; j++)
        {
            if (userName[i] == userName[j])
            {
                s++;
            }
        }
        if (s >= 2)
        {
            count--;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
