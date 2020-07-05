#include<bits/stdc++.h>
using namespace std;

struct node *head;
struct node{
    int data;
    struct node *link;
};

void insert(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=head;
    head=temp;
}
int main()
{
    head=NULL;
    int m,n;
    cin>>n;
    while(n--)
    {
       cin>>m;
       insert(m);
    }

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
}
