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
        if (a & 1 == 1)
        {
            if (b > (a / 2))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (b >= (a / 2))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}