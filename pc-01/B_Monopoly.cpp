#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[4];
        for (int i = 0; i < 4; i++)
            cin >> a[i];

        bool flag = false;
        for (int i = 0; i < 4; i++)
        {
            int cur = a[i];
            int rest = 0;
            for (int j = 0; j < 4; j++)
            {
                if (i == j)
                    continue;
                else
                    rest += a[j];
            }
            if (cur > rest)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}