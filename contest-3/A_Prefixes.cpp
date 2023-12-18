#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 1)
        n--;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
                if (s[i] == 'a')
                    s[i + 1] = 'b';
                else
                    s[i + 1] = 'a';
            }
        }
    }
    cout << cnt << endl;
    cout << s << endl;

    return 0;
}