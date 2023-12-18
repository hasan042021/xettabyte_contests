#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        long long n, m;
        cin >> n >> m;

        long long k = n / m;
        long long lastDigit = (k * m) % 10;
        long long sum = (k / 10) * 45;
        for (int i = 1; i <= lastDigit; i++)
        {
            sum += (k / 10 + (i <= k % 10));
        }

        cout << sum << endl;
    }

    return 0;
}
