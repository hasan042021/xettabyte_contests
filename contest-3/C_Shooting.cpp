#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main()
{
    int n;
    cin >> n;
    priority_queue<pii, vector<pii>, less<pii>> pq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push({a, i + 1});
    }
    int sh = 0;
    int cnt = 0;
    queue<int> q;
    while (!pq.empty())
    {
        pii bpair = pq.top();
        int b = bpair.first;
        int idx = bpair.second;
        pq.pop();
        q.push(idx);
        int res = b * sh + 1;
        cnt += res;
        sh++;
    }
    cout << cnt << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}