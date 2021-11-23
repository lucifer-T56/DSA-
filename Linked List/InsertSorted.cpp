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

Node* InsertSorted(Node *head, int x)
{
    
    Node *temp=new Node(x);
    if(head==nullptr)
    {
        return temp;
    }
    
    if(x < head->data)
    {
        temp->next=head;
        return temp;
    }

    Node *curr=head;
    while(curr->next!=nullptr && curr->next->data < x)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
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
    
    disp(head);
    int k;
    cin>>k;
    head=InsertSorted(head,k);
    disp(head);
    return 0;
} 
