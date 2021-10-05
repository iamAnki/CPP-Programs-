#include <bits/stdc++.h>
using namespace std;
class Heap{
vector<int>v;
bool minheap;
void heapify(int idx){
    int last=v.size()-1;
    int left=2*idx;
    int right=2*idx+1;
    int min_idx=idx;
    if(left<=last && compare(v[left],v[idx])){
        min_idx=left;
    }
    if(right<=last && compare(v[right],v[min_idx])){
        min_idx=right;
    }
    if(min_idx!=idx){
        swap(v[idx],v[min_idx]);
        heapify(min_idx);
    }
    return;
}
public:
Heap(int d=10,bool type=true){
  v.reserve(d);
  v.push_back(-1);
  minheap=type;
}
 bool compare(int a,int b){
     if(minheap){
         return a<b;
     }
     return a>b;
 }
 void push(int val){
     v.push_back(val);
     int idx=v.size()-1;
     int parent=idx/2;
     while(idx>1 && compare(v[idx],v[parent])){
        swap(v[idx],v[parent]);
        idx=parent;
        parent=parent/2;
     }
 }
 int top(){
     return v[1];
 }
 void pop(){
     int last=v.size()-1;
     swap(v[1],v[last]);
     v.pop_back();
     heapify(1);
     return;
 }
 bool empty(){
     return v.size()==1;
 }

};
void buildHeap(vector<int>&v){
    for(int i=2;i<v.size();i++){
        int idx=i;
        int parent=idx/2;
        while(idx>1 && v[idx]>v[parent]){
            swap(v[idx],v[parent]);
            idx=parent;
            parent/=2;
        }
    }
}
// void buildHeapOpti(vector<int>&v){
//     for(int i=v.size()/2;i>=1;i--){
//         heapify(v,i);
//     }
// }
void heapify2(vector<int>&v,int idx,int n){
    int last=n-1;
    int left=2*idx;
    int right=2*idx+1;
    int min_idx=idx;
    if(left<=last && v[left]>v[idx]){
        min_idx=left;
    }
    if(right<=last && v[right]>v[min_idx]){
        min_idx=right;
    }
    if(min_idx!=idx){
        swap(v[idx],v[min_idx]);
        heapify2(v,min_idx,n);
    }
    return;
}
void heapsort(vector<int>&v){
    buildHeap(v);
    int n=v.size();
    while(n>1){
        swap(v[1],v[n-1]);
        n--;
        heapify2(v,1,n);
    }

}
int main() {
    // Heap h(6,false);
    // int n,x;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     h.push(x);
    // }
    // while(!h.empty()){
    //     cout<<h.top()<<" ";
    //     h.pop();
    // }
 vector<int>v{-1,3,2,4,5,9,7,6};
//  buildHeap(v);
  heapsort(v);
 for(auto x:v){
     if(x!=-1)
     cout<<x<<" ";
 }
}
