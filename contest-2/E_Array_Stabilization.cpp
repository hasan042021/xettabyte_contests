#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int instability = *max_element(a, a + n) - *min_element(a, a + n);

    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        swap(a[i], a[n - 1]);

        int new_instability = *max_element(a, a + n - 1) - *min_element(a, a + n - 1);

        mn = min(instability, new_instability);

        swap(a[i], a[n - 1]);
    }
    cout << mn << endl;
    return 0;
}