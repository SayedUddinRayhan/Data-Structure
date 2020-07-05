#include<bits/stdc++.h>
using namespace std;

#define W 1
#define G 2
#define B 3

int nd,eg,adj[100][100];
int color[100];

void dfsvisit(int x)
{
    color[x]=G;

    for(int i=0;i<nd;i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==W)
            {
                dfsvisit(i);
            }
        }
    }

    color[x]=B;
    cout<<x<<" ";
}
void dfs()
{
    for(int i=0;i<nd;i++)
    {
        color[i]=W;
    }

    for(int i=0;i<nd;i++)
    {
        if(color[i]==W)
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
        //adj[n2][n1]=1;
    }

    dfs();
}
