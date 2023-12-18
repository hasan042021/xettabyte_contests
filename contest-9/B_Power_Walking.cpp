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
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] > 1)
                cnt++;
        }
        // cout << cnt << endl;
        int unq = n - cnt;
        for (int i = 1; i <= unq; i++)
            cout << unq << " ";
        int d = unq;
        for (int i = unq + 1; i <= n; i++)
        {
            d++;
            cout << d << " ";
        }
        cout << endl;
    }
    return 0;
}