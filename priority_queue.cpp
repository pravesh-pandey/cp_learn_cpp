#include <bits/stdc++.h>
using namespace std;

struct comp
{
    bool operator()(int a, int b)
    {
        return a < b;
    }
};
void solve()
{
    priority_queue<int, vector<int>, comp> pq;
    pq.push(1);
    pq.push(254);
    pq.push(134);
    pq.push(2465);
    pq.push(133);
    pq.push(241);
    pq.push(17);
    pq.push(248);
    pq.push(14);
    pq.push(24);
    while (!pq.empty())
    {
        cout << pq.top() <<" ";
        pq.pop();
    }
}
