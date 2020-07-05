#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nd,ed;
    cin>>nd>>ed;
    vector<int>v[ed];

    int n1,n2;
    for(int i=0;i<ed;i++)
    {
        cin>>n1>>n2;
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }

    int neigh;
    cin>>neigh;
    for(int i=0;i<v[neigh].size();i++)
    {
        cout<<v[neigh][i]<<" ";
    }
}
