#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=nullptr;
    }
};

bool Loop(Node *head)
{
    Node *f=head;
    Node* s=head;
      
}

int main()
{
    Node *head=new Node(10);
    Node *t1=new Node(10);
    Node *t2=new Node(10);
    Node *t3=new Node(10);
    Node *t4=new Node(10);
    head->next=t1;
    t1->next=t2;
    t2->next=t3;
    t3->next=t4;
    t4->next=t2;
    Loop(head);
}