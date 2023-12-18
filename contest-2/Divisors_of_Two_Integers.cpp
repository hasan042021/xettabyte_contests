#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> divisors(n);
    map<int, int> divisor_count;

    for (int i = 0; i < n; i++)
    {
        cin >> divisors[i];
        divisor_count[divisors[i]]++;
    }

    sort(divisors.begin(), divisors.end(), greater<int>());

    int x = divisors[0];

    for (int i = 0; i < n; i++)
    {
        if (x % divisors[i] == 0)
        {
            divisor_count[divisors[i]]--;
            if (divisor_count[divisors[i]] == 0)
            {
                divisor_count.erase(divisors[i]);
            }
        }
    }

    int y = divisor_count.begin()->first;

    cout << x << " " << y << endl;

    return 0;
}