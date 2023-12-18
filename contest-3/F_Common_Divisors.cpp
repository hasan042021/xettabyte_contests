#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long gcd_res = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        gcd_res = __gcd(gcd_res, a);
    }

    int cmn_div = 0;
    for (int i = 1; i * i <= gcd_res; i++)
    {
        if (gcd_res % i == 0)
        {
            cmn_div++;
            if (i != gcd_res / i)
            {
                cmn_div++;
            }
        }
    }

    cout << cmn_div << endl;

    return 0;
}
