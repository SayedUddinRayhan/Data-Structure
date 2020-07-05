#include<bits/stdc++.h>
using namespace std;
#define s 10004

vector<int>v[s];
bool vis[s];

void dfsvisit(int x)
{
    vis[x]=true;

    for(int i=0;i<v[x].size();i++)
    {
        int a=v[x][i];
        if(vis[a]==false)
        {
            dfsvisit(a);
        }
    }
}
void solve()
{
    int n,m,l,x,y,z;

    cin>>n>>m>>l;

    for(int i=0;i<n+1;i++)
    {
        vis[i]=false;
        v[i].clear();
    }

    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }

    for(int i=0;i<l;i++)
    {
        cin>>z;
        dfsvisit(z);
    }

    int cnt=0;

    for(int i=0;i<n+1;i++)
    {
        if(vis[i]==true)cnt++;
    }
    cout<<cnt<<"\n";
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
