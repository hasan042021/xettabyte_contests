#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int st = min(a[n - 2] - a[0], a[n - 1] - a[1]);
    cout << st << endl;
    return 0;
}