#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int r = n * c;
        string s = to_string(r);
        if (s.size() == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}