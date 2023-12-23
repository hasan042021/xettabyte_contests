#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0;
        for (int i = 1; i <= a; i++)
        {
            if (i % 2 == 0)
                sum += b;
            else
                sum += c;
        } 
        cout << sum << endl;
    }
    return 0;
}