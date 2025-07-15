#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node*right;
    Node*left;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int height(Node*root){
    if(root==NULL){
        return 0;
    }
    int lftht=height(root->left);
    int rtht=height(root->right);
    return max(lftht,rtht)+1;
}
int main(){
    Node*root=new Node(6);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<"The tree nodes of preorder are:";
    preorder(root);

    cout<<"\n";

    cout<<"Height of tree is :"<<height(root);
    cout<<endl;
    return 0;
}