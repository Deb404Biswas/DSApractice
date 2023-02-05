#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first=NULL;


void insert(int n)
{
    struct node *last,*t;
    t=new node;
    t->data=n;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        t=last;
    }
}

void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<" ";
}

struct node* reverse(struct node *p)
{
    struct node *q,*r;
    q=NULL;
    r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }

    return q;
}

int main()
{
    struct node *p;
    first=new node;
    first=NULL;
    cout<<"Enter elements to add to the linked list and -1 to end the linked list"<<endl;
    for(int i=1;i<10;i++)
    {
        int ele;
        cin>>ele;
        if(ele!=-1)
        insert(ele);
        else
        break;
    }
    cout<<"LinkedList before reversing is as follows:"<<endl;
    display(first);
    first=reverse(first);
    cout<<"LinkedList after reversing is as follows:"<<endl;
    display(first);
}