#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
class solution{
    public:
    Node* mergenode(Node* head1,Node* head2)
    {
        if(head1==NULL || head2==NULL)
        {
            return head1==NULL ? head2:head1;   //ternary statement  
        }
        if(head1->data <= head2->data)
        {
            head1->next=mergenode(head1->next,head2);
            return head1;
        }
        else
        {
            head2->next=mergenode(head1,head2->next);
            return head2;
        }
    }
    void printnode(Node*head)
    {
        while(head)
        {
            cout<<head->data<<"->";
            head=head->next;
        }
        cout<<"NULL"<<endl;
    }
    void append(Node*&head,int val)
    {
        if(!head)
        {
            head=new Node(val);
            return;
        }
        Node*temp=head;
        while(temp->next)temp=temp->next;
        temp->next=new Node(val);
    }
    
};
int main()
{
    solution s;
    Node* head1=NULL;
    Node* head2=NULL;

    s.append(head1,1);
    s.append(head1,3);
    s.append(head1,5);

    s.append(head2,2);
    s.append(head2,4);
    s.append(head2,6);

    Node*merged=s.mergenode(head1,head2);
    cout<<"Merged list:";
    s.printnode(merged);
    return 0;
}