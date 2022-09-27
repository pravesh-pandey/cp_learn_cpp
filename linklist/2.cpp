#include<bits/stdc++.h>
using namespace std;
struct node{
    float data;
    node* next;
    node(){
        data=0;
        next=NULL;
    }
};
void print(node* nn)
{
    node* n=nn;
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
    free(n);
    cout<<endl;
}
int main()
{
    node* head=NULL;
    head=new node();
    node* n=head;
    for(int i=0;i<10;i++)
    {
        n->data=i;
        n->next=new node();
        n=n->next;
        n->next=NULL;
        n->data=i;
        n->next=new node();
        n=n->next;
        n->next=NULL;
    }
    print(head);
    node *h1=head;
    int t=4;
    while(h1->next!=NULL)
    {
        if(h1->next->data==t)
        {
            node* h=h1->next;
            h1->next=h1->next->next;
            free(h);
        }
        else
        {
            h1=h1->next;
        }
    }
    print(head);
    return 0;
}
