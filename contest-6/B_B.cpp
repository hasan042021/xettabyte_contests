#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int ans = INT_MAX;
        for (int i = 0; i <= n - m; i++)
        {
            int val = 0;
            for (int j = 0; j < m; j++)
            {
                val += min(abs(a[i + j] - b[j]), abs(10 - abs(a[i + j] - b[j])));
            }
            ans = min(ans, val);
        }
        cout << ans << endl;
    }
    return 0;
}