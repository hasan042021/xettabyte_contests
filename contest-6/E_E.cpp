#include <bits/stdc++.h>
using namespace std;

int find_max(int a[], int n)
{
    int mx = INT_MIN;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            mx = max(cnt, mx);
            cnt = 0;
        }
        else
            cnt++;
    }
    mx = max(mx, cnt);
    return mx;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int ma = find_max(a, n);
        int mb = find_max(b, n);
        if (ma > mb)
            cout << "Om" << endl;
        else if (ma < mb)
            cout << "Addy" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}