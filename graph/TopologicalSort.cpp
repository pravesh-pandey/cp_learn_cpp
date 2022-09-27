#include<bits/stdc++.h>
using namespace std;
// topological sort -- dependency graph
const int N=1e4;
vector<int> graph[N],ans;
vector<bool> visited(N,false);
void dfs(int v)
{
    visited[v]=true;
    for(auto u:graph[v])
    if(!visited[u])
    dfs(u);
    ans.push_back(v); 
}
int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=0;i<r;i++)
    {
        int u=0,v=0;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    for(int i=0;i<n;i++)
    if(!visited[i])
    dfs(i);
    if(ans.size()!=n)
    cout<<"Sandro fails.\n";
    else
    for(auto i:ans)
    cout<<i<<" ";
    return 0;
}