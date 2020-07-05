#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root;

void ins(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
    }else{
        struct node *temp=root;
        while(1)
        {
            if(newnode->data<=temp->data)
            {
                if(temp->left==NULL)
                {
                    temp->left=newnode;
                    break;
                }else{
                    temp=temp->left;
                }
            }else{
                if(temp->right==NULL)
                {
                    temp->right=newnode;
                    break;
                }else{
                    temp=temp->right;
                }
            }
        }
    }
}

void show()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));

    temp=root;
    while(temp!=NULL)
    {
        temp=temp->left;
        cout<<temp->data<<" ";

        temp=temp->right;
    }
}
int main()
{
    root=NULL;
    ins(30);
    ins(20);
    ins(50);
    ins(45);

    show();
}
