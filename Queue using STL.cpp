#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;

    while(1)
    {
        int n;
        cin>>n;
        if(n<0)break;
        q.push(n);
    }

    while(!q.empty())
    {
        int x=q.front();
        cout<<x<<"\n";
        q.pop();
    }

}
