#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s, r;
        cin >> s >> r;
        unordered_map<int, int> freq;
        if (b > a)
            swap(s, r);
        for (char c : s)
        {
            freq[c]++;
        }
        for (char c : r)
        {
            freq[c]--;
        }
        bool ok = true;
        int odd = 0;

        for (auto e : freq)
        {
            if (e.second < 0)
            {
                ok = false;
                break;
            }
            if (e.second % 2 != 0)
                odd++;
            if (odd > 1)
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}