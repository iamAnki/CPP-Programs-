#include<bits/stdc++.h>
using namespace std;

int distance(string s1,string s2)
{
    int i,j,m=s1.size(), n=s2.size();
    int A[m+1][n+1];
    for(i=0;i<=n;i++)  A[0][i]=i;
    for(i=1;i<=m;i++)  A[i][0]=i;
    
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1]) A[i][j]=A[i-1][j-1];
            else     A[i][j]=min(A[i][j-1],min(A[i-1][j-1],A[i-1][j])) +1;
        }
    }
    return A[m][n];
}


typedef struct bknode
{
     string key;
     struct bknode *ptrs[10]={NULL};
}*bkptr;


void insert(bkptr &BK,string str)
{
    if(BK==NULL)
    {
        BK=new(bknode);
        BK->key=str;
        return;
    }
    int dist=distance(BK->key,str);
    insert(BK->ptrs[dist],str);
}
 void find_keys_with_given_key(bkptr BK,string str,int n)
 {
     queue<bkptr>que;
     que.push(BK);
     while(!que.empty())
     {
         bkptr temp=que.front();que.pop();
         int d=distance(temp->key,str);
         if(d<=n) cout<<d<<" "<<temp->key<<" ";
         for(int i=0;i<10;i++)
         {
             if(temp->ptrs[i]!=NULL && i>=d-n &&i<=d+n)
             que.push(temp->ptrs[i]);
         }
     }
 }

int main()
{
    bkptr BK=NULL;
    string str; cin>>str;
    while(str!="#")
    {
        insert(BK,str);
        cin>>str;
    }
    int n; cin>>str>>n;
    find_keys_with_given_key(BK,str,n);

    return 0;
}
