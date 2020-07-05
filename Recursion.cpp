#include<bits/stdc++.h>
using namespace std;

void f(int x)
{
    if(x==0)return;

    x--;
    cout<<x<<"\n";
    f(x);
    cout<<x<<"\n";
}
int main()
{
    int n;
    cin>>n;
    f(n);
    return 0;
}
