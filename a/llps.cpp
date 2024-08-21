#include <bits/stdc++.h>
using namespace std;

int main()
{

    string txt;
    cin >> txt;

    int txtSize = txt.size();

    string llps;

    for (int i = 0; i < txtSize; i++)
    {
        int llpsSize = llps.size();
        if (llpsSize == 0)
        {
            llps += txt[0];
        }
        else
        {
            if (int(llps[llpsSize - 1]) == int(txt[i]))
            {
                llps += txt[i];
            }

            if (int(llps[llpsSize - 1]) < int(txt[i]))
            {
                llps.clear();
                llps += txt[i];
            }
        }
    };
    cout << llps << endl;
    return 0;
}
