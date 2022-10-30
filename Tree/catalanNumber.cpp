//Catalan Number 1 1 2 5 14
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int catalan(int n){
    if(n<=1){
        return 11;
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
     
        res+=catalan(i)*catalan(n-i-1);

    }
    return res;
}
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
// structure for binary tree of node=3
vector <Node*> constructTrees(int start,int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    for (int i=start;i<=end;i++){
        vector<Node*>leftSubtrees=constructTrees(start,i-1);
        vector<Node*> rightsubtrees=constructTrees(i+1,end);

        for(int j=0;j<leftSubtrees.size();j++){
            Node* left=leftSubtrees[j];
            for(int k=0;k<rightsubtrees.size();k++){
                Node* right=rightsubtrees[k];
                Node* node=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(node);


            }
        }
    }
    return trees;
}
void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    // for(int i=0;i<10;i++){
    //     cout<<catalan(i)<<" ";


    // }
    // cout<<endl;

vector<Node* >totalTrees=constructTrees(1,3);
for(int i=0;i<totalTrees.size();i++){
    cout<<(i+1)<<" : ";
    preorder(totalTrees[i]);
    cout<<endl;
}
    
    
    return 0;
}