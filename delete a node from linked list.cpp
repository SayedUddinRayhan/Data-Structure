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
void del(int y)
{
    struct node *temp;
    temp=head;
    if(y==1)
    {
        head=head->link;
        free(temp);
    }
    else
    {

        for(int i=1;i<=y-2;i++)
        {
            temp=temp->link;
        }
        struct node *tmp;
        tmp=temp->link;
        temp->link=tmp->link;
        free(tmp);

    }
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
    show();
    cout<<"\n";
    int pos;
    cin>>pos;
    del(pos);
    show();
}
