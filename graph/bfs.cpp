#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> adj;
    int n; //nodes
    int s; // vertex
    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n), p(n);
    //d - path length
    //p - parent
    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    //-------------------display shortest path------------ (root-u)
    if (!used[u]) 
    {
        cout << "No path!";
    } 
    else 
    {
        vector<int> path;
        for (int v = u; v != -1; v = p[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for (int v : path)
            cout << v << " ";
    }

    return 0;
}