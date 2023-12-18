#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 998244353;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1 == 1)
            cout << 0 << endl;
        else
        {
            int d = n / 2;
            ll val = 1;
            for (int i = 1; i <= d; i++)
            {
                val = (val * i) % mod;
            }
            ll res = (val * val) % mod;
            cout << res << endl;
        }
    }
    return 0;
}