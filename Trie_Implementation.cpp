#include <bits/stdc++.h>
using namespace std;
class Node{
public:
char data;
unordered_map<char,Node*>mp;
bool terminal;
Node(char d){
    data=d;
    terminal=false;
}

};
class Trie{
    public:
 Node* root;
 int cnt;
 Trie(){
     root=new Node('\0');
     cnt=0;
 }
 void insert(char *w){
     Node* temp=root;
     for(int i=0;w[i]!='\0';i++){
         if(temp->mp.count(w[i])){
             temp=temp->mp[w[i]];
         }
         else{
             Node* n=new Node (w[i]);
             temp->mp[w[i]]=n;
             temp=n;
         }
     }
     temp->terminal=true;
     cnt++;
 }
 bool find(char *w){
     Node* temp=root;
     for(int i=0;w[i]!='\0';i++){
           if(temp->mp.count(w[i])==0) return false;
           temp=temp->mp[w[i]];
     }
     return temp->terminal;
 }
};
int main() {
    Trie t;
    char words[][10]={"not","news","apple","orange","hello"};
    char w[10];
    cin>>w;
    for(int i=0;i<5;i++){
        t.insert(words[i]);
    }
    cout<<t.cnt<<endl;
cout<<t.find(w);
}
