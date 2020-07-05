#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;

};
int main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->link=(struct node*)malloc(sizeof(struct node));
    head->link->data=10;
    head->link->link=(struct node*)malloc(sizeof(struct node));
    head->link->link->data=30;
    head->link->link->link=NULL;

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }
}
