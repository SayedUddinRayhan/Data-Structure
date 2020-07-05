#include<bits/stdc++.h>
using namespace std;

int adj[100][100];

int main()
{

    freopen("neighbour.txt","r",stdin);
    int nd,eg;
    cin>>nd>>eg;

    int n1,n2;
    for(int i=0;i<eg;i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }

    int neig;
    cin>>neig;

    for(int i=0;i<nd;i++)
    {
        if(adj[neig][i]==1)
        {
            cout<<i<<" ";
        }
    }
}
