#include<bits/stdc++.h>
using namespace std; 

struct Node 
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node* Iend(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;
    Node *curr=head;
    while(curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}

void disp(Node* head)
{
    Node* k=head;
    if(head == nullptr)
    {
        cout<<"The LL is Empty";
        return;
    }
    while(k!=nullptr)
    {
        cout<<k->data<<" ";
        k=k->next;
    }
    return;
}

Node *Reverse(Node *head)
{
    
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }

    Node *k=Reverse(head->next);
    Node *t=head->next;
    t->next=head;
    head->next=nullptr;
    return k;
}

int FromEnd(Node *head, int k)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head->data;
    }

    Node *nh=Reverse(head);
    Node *temp=nh;
    for(int i=1 ;i < k; i++)
    {
          temp=temp->next;
    }

    return temp->data;
     
}

Node *RfEnd(Node *head, int k)
{
    if(head==nullptr || head->next==nullptr)
    {
        return head;
    }
    Node *s=head;
    Node *f=head;

    for(int i=1;i<k;i++)
    {
        f=f->next;
    }

    while(f->next->next)
    {
        s=s->next;
        f=f->next;
    }

    s->next=s->next->next;
    return head;
    
}

int main()
{
    int n;
    cin>>n;
    Node* head=NULL;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        head=Iend(head,k);
    }
    int k;
    cin>>k;
    head=RfEnd(head,k);
    // cout<<FromEnd(head,k);
    disp(head);
    // Node *l=RfEnd(head ,k);
    // cout<<l->data;
    return 0;
}