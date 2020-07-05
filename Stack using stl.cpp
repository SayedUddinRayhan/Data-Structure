#include<bits/stdc++.h>
using namespace std;

int main()
{

    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        s.push(m);
    }

    while(!s.empty())
    {
        int x=s.top();
        cout<<x<<"\n";
        s.pop();
    }
}
