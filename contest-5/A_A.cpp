#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    bool ok = n - x <= m;
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}