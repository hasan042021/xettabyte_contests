#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string a, string b)
{
    return b.find(a) != string::npos;
}

bool isCorrectOrdering(vector<string> strings)
{
    for (int i = 1; i < strings.size(); i++)
    {
        if (!isSubstring(strings[i - 1], strings[i]))
        {
            return false;
        }
    }

    return true;
}

void bruteForce(vector<string> strings)
{
    // Try all possible orderings of the strings.
    do
    {
        // Check if the current ordering is correct.
        if (isCorrectOrdering(strings))
        {
            // Print the ordering and exit.
            for (int i = 0; i < strings.size(); i++)
            {
                cout << strings[i] << endl;
            }

            exit(0);
        }
    } while (next_permutation(strings.begin(), strings.end()));

    // If we reach here, then there is no correct ordering of the strings.
    cout << "NO" << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strings[i];
    }

    bruteForce(strings);

    return 0;
}