#include<bits/stdc++.h>
using namespace std;
#define w 1
#define g 2
#define b 3

int adj[100][100],node,edge,color[100],parent[100],dis[100];

void bfs(int srtnode)
{
    for(int i=0;i<node;i++)
    {
        color[i]=w;
        parent[i]=-1;
        dis[i]=INT_MIN;
    }

    queue<int>q;
    q.push(srtnode);
    dis[srtnode]=0;
    parent[srtnode]=-1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        color[x]=g;
        cout<<x<<" ";
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
    int nd,nd1;
    cin>>nd>>nd1;
    cout<<"\n";
    cout<<parent[nd]<<"\n";
    cout<<dis[nd1]<<"\n";

}
