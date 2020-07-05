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
int main()
{
    head=NULL;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    head=temp;
    head->data=4;
    head->link=NULL;
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    head->link=tmp;
    head->link->data=9;
    head->link->link=NULL;
    struct node *tp=(struct node*)malloc(sizeof(struct node));
    head->link->link=tp;
    head->link->link->data=77;
    head->link->link->link=NULL;
    show();
    return 0;
}
