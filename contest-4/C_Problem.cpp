#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int s = a + b;

        bool ok = false;
        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }

        while (a + b <= s)
        {
            if (a > b)
            {
                a--;
                b++;
            }
            else
            {
                b--;
                a += 3;
            }
            if (a == b)
            {
                ok = true;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}