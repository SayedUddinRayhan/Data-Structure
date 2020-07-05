#include<bits/stdc++.h>
using namespace std;

#define w 1
#define g 2
#define b 3

int t=1;
int nd,eg,adj[100][100],color[100],st[100],ft[100];

void dfsvisit(int x)
{
    color[x]=g;
    st[x]=t;
    ++t;

    for(int i=0;i<nd;i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==w)
            {
                dfsvisit(i);
            }
        }
    }

    color[x]=b;
    ft[x]=t;
    ++t;
}
void dfs()
{
    for(int i=0;i<nd;i++)
    {
        color[i]=w;
    }

    for(int i=0;i<nd;i++)
    {
        if(color[i]==w)
        {
            dfsvisit(i);
        }
    }
}
int main()
{
    freopen("neighbour.txt","r",stdin);
    cin>>nd>>eg;
    int n1,n2;
    for(int i=0;i<eg;i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
    }

    dfs();
    for(int i=0;i<nd;i++)
    {
        cout<<(char)('A'+i)<<": "<<st[i]<<"/"<<ft[i]<<"\n";
    }
}
