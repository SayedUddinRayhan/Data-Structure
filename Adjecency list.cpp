#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v[4];


    v[0].push_back(10);
    v[0].push_back(30);
    v[0].push_back(110);
    v[2].push_back(11);
    v[2].push_back(112);

    for(int i=0;i<v[0].size();i++)
    {
        cout<<v[0][i]<<" ";
    }
}
