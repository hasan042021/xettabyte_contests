#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int fs = stoi(s.substr(0, 2));
        int sc = stoi(s.substr(3, 2));
        if (fs < 13 && sc < 13)
            cout << "BOTH" << endl;
        else if (fs < 13 && sc >= 13)
            cout << "MM/DD/YYYY" << endl;
        else
            cout << "DD/MM/YYYY" << endl;
    }
    return 0;
}