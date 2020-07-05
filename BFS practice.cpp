#include<bits/stdc++.h>
using namespace std;
#define w 1
#define g 2
#define b 3

int node,edge,color[100],adj[100][100],parent[100],dis[100];

void bfs(int snode)
{
    for(int i=0;i<node;i++)
    {
        color[i]=w;
        parent[i]=-1;
        dis[i]=INT_MIN;
    }

    queue<int>q;
    q.push(snode);
    parent[snode]=-1;
    dis[snode]=0;

    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";

        color[x]=g;
        for(int i=0;i<node;i++)
        {
            if(adj[x][i]==1)
            {
                if(color[i]==w)
                {
                    parent[i]=x;
                    dis[i]=dis[x]+1;
                    q.push(i);
                }
            }
        }

        color[x]=b;

    }
}
int main()
{
    freopen("neighbour.txt","r",stdin);
    cin>>node>>edge;
    int n1,n2;

    for(int i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
    }
    bfs(0);

    int d,p;
    cin>>d>>p;

    cout<<"\n"<<dis[d]<<" "<<parent[p]<<"\n";
}
