#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (a[i] == 1 && a[j] == 1)
                break;
            if (a[i] == 0)
                i++;
            if (a[j] == 0)
                j--;
        }
        int cnt = 0;
        for (int l = i; l <= j; l++)
        {
            if (a[l] == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}