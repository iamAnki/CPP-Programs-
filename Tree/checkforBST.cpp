// checking for the tree is Binary search tree (BST) or not  time complexity(n)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Check BST
bool isBST(Node* root,Node* min,Node* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <= min->data){

        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;

    }
    bool leftValid=isBST(root->left,min,root);
    bool rightValid=isBST(root->right,root,max); 
    return leftValid and rightValid;
}
int main()
{
//     Node* root1=new Node(1);
//     root1->left=new Node(2);
//     root1->right=new Node(3);
    Node* root2=new Node(5);
    root2->left=new Node(2);
    root2->right=new Node(8);
    if(isBST(root2,NULL,NULL)){
        cout<<"Valid BST"<<endl;
    }
    else{
        cout<<"Not Valid";
    }

    return 0;
}