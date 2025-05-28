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
class Circularll{
    Node*head;
    Node*tail;
    public:
    Circularll()
    {
        head=tail=NULL;
    }
    void insertatbeg(int val)
    {
        Node*newNode=new Node(val);
        if(tail==NULL)
        {
            head=tail=newNode;
            tail->next=head;
        }
        else
        {
            newNode->next=head;
            head=newNode;
            tail->next=newNode;
        }
    }
    void insertatend(int val)
    {
        Node*newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
            tail->next=head;
        }
        else
        {
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void deleteatbeg()
    {
        Node*temp=head;
        if(head==NULL)
        {
            return;
        }
        else if(head==tail)
        {
            delete head;
            head=tail=NULL;
        }
        else
        {
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    void deleteatend()
    {
        Node*temp=tail;
        if(head==NULL)
        {
            return;
        }
        else if(head==tail)
        {
            delete head;
            head=tail=NULL;
        }
        else
        {
            Node*prev=head;
            while(prev->next=tail)
            {
                prev=prev->next;
                tail=prev;
                tail->next=head;
                temp->next=NULL;
                delete temp;
            }
        }
    }
    void print()
    {
        if(head==NULL)
        {
            return;
        }
        cout<<head->data<<"->";
        Node*temp=head->next;
        while(temp!=head)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
};
int main()
{
    Circularll c;
    c.insertatbeg(3);
    c.insertatbeg(2);
    c.insertatbeg(1);
    cout<<"list inserted at beginning:";
    c.print();
    c.insertatend(4);
    c.insertatend(5);
    c.insertatend(6);
    cout<<"List inserted at end:";
    c.print();
    c.deleteatbeg();
    c.print();
    c.deleteatend();
    c.print();
    return 0;
}
