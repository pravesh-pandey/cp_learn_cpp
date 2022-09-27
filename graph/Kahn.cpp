#include<bits/stdc++.h>
using namespace std;
const int N=1000007;
const int mod=1e9+7;
vector<int> graph[N],degree(N,0),dp(N,0),backedge[N];
vector<bool> visited(N,false);

void kahn(int n)
{
    queue<int> q;  
    for(int i=0;i<n;i++)
    if(degree[i]==0)
    q.push(i);

    while(!q.empty())
    {
        auto curr=q.front();
        q.pop();

        for(auto u:graph[curr])
        {
            degree[u]--;
            if(degree[u]==0)
            q.push(u);
        }
        for(auto u:backedge[curr])
        dp[curr]=(dp[curr]+dp[u])%mod;
    }
    cout<<dp[n-1]<<endl;
}
int main()
{
    int n,r;
    cin>>n>>r;
    dp[0]=1;
    for(int i=0;i<r;i++)
    {
        int u=0,v=0;
        cin>>u>>v;
        graph[u-1].push_back(v-1);
        backedge[v-1].push_back(u-1);
        degree[v-1]++;
    }
    kahn(n);
    return 0;
}