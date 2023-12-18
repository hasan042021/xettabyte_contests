#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], b[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
        }

        sort(a, a + 3);
        sort(b, b + 3);

        int p = a[2] * 100 + a[1] * 10 + a[0];
        int q = b[2] * 100 + b[1] * 10 + b[0];

        if (p > q)
        {
            cout << "Alice" << endl;
        }
        else if (p < q)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}