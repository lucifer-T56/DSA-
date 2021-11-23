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
        cout<<k->data<<" - >  ";
        k=k->next;
    }
    return;
}
int findM(Node *head)
{
    if(head == nullptr || head->next==nullptr)
    {
       
        return head->data;
    }
    Node *f=head, *s=head;
    int c=0;
    while(f->next != nullptr && f->next->next !=nullptr)
    {
        c++;
        s=s->next;
        f=f->next->next;
    }
   
    return s->data;
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
    //disp(head);

    cout<<findM(head)<<endl;
}