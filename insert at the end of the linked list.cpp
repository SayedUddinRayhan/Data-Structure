#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    struct node *link;
};

struct node *head;
void print()
{
    struct node *solve;
    solve=head;
    while(solve!=NULL)
    {
        cout<<solve->data<<" ";
        solve=solve->link;
    }
}
void insert(int x)
{
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->link=NULL;

        if(head==NULL)
        {
            head=temp;
        }
        else{
            struct node *tmp;
            tmp=head;
            while(tmp->link!=NULL)
            {
                tmp=tmp->link;
            }
            tmp->link=temp;
        }
}

int main()
{

    head=NULL;

    int m,n;
    cout<<"\nEnter number:";
    cin>>n;
    while(n--)
    {
        cin>>m;
        insert(m);
    }
    print();
}
