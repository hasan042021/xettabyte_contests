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
        int c = 1;
        map<int, int> mp;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }
        for (auto i : mp)
        {
            c = max(c, i.second);
        }
        cout << c << endl;
    }
    return 0;
}