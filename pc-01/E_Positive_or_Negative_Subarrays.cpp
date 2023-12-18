#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a[n];
        ll pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                pos++;
            else
                neg++;
        }
        ll tot = (n * (n + 1)) / 2;
        if (pos == 0 || neg == 0)
            cout << tot << endl;
        else
        {
            ll cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < 0)
                    cnt += i;
            }
            cnt += neg;
            tot -= cnt;
            cout << abs(tot - cnt) << endl;
        }
    }
    return 0;
}