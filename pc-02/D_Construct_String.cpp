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
        string s;
        cin >> s;

        if (n == 1)
            cout << s << endl;
        else
        {
            string res = "";
            char cur = s[0];
            int cnt = 1;
            for (int i = 1; i < n; i++)
            {
                if (cur != s[i])
                {
                    if (cnt % 2 == 0)
                    {
                        res += cur;
                        res += cur;
                    }
                    else
                    {
                        res += cur;
                    }
                    cur = s[i];
                    cnt = 1;
                }
                else
                {
                    cnt++;
                }
            }
            if (cnt % 2 == 0)
            {
                res += cur;
                res += cur;
            }
            else
            {
                res += cur;
            }
            cout << res << endl;
        }
    }
    return 0;
}