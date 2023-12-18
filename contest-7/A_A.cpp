#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int c_d = 1;
        int c_n = 1;
        int cnt = 1;
        int l = 1;
        if (x == 1)
        {
            cout << 1 << endl;
            continue;
        }
        while (true)
        {

            if (l < 4)
            {
                string s = to_string(c_n);
                string d = to_string(c_d);
                string n_s = s + d;
                // cout << n_s << endl;
                c_n = stoi(n_s);
                l = n_s.size();
                cnt += l;
            }
            else
            {
                l = 1;
                c_d++;
                c_n = c_d;
                cnt++;
            }
            if (x == c_n)
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}