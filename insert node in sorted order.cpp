#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

struct node *head;

void show()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

void add(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        struct node *tmp;
        tmp=head;
        while(tmp->link!=NULL)
        {
            tmp=tmp->link;
        }
        tmp->link=temp;
    }
}

void ins(int y)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=y;

    if(head==NULL||temp->data<head->data)
    {
        temp->link=head;
        head=temp;
    }
    else
    {
        struct node *p1,*p2;
        p1=head;
        p2=p1->link;
        while( p2!=NULL&&temp->data>p2->data)
        {
            p1=p2;
            p2=p2->link;
        }
        p1->link=temp;
        temp->link=p2;

    }

}
int main()
{
    int m,n;
    cin>>n;
    while(n--)
    {
        cin>>m;
        add(m);
    }
    show();
    cout<<"\n";
    int p;
    cin>>p;
    ins(p);
    show();

}
