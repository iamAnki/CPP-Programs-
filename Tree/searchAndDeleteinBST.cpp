// Searching and deleting in a binary search tree
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


//Search in a BST
Node* searchINBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
        return  searchINBST(root->left,key);
    }
    return searchINBST(root->right,key);
}
//Delete in BST
Node* inorderSucc(Node* root){
    Node* curr=root;
    while(curr && curr->left!=NULL){
        curr= curr->left;

    }
    return curr;
}
Node* deleteINBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left=deleteINBST(root->left,key);
    }
    else if (key>root->data){
        root->right=deleteINBST(root->right,key);
    }
    else {
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);

            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        
        }
        //case 3
        Node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteINBST(root->right,temp->data);

    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main()
{
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    
    int key;
    cout<<"Enter the Key\n";
    cin>>key;
    // if(searchINBST(root,key)==NULL){
    //     cout<<"Key Doses Not exist"<<endl;
    // }
    // else{
    //     cout<<"Key exist"<<endl;
    // }
    inorder(root);
    cout<<endl;
    root=deleteINBST(root,key);
    inorder(root);
    cout<<endl;
    return 0;
}