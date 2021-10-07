#include <bits/stdc++.h>
#include<iomanip>

using namespace std;

int main(){
    int h , m , s ;
    string f   ;
     char c ; 
     cin>>h>>c>>m>>c>>s>>f ;
    if(f=="AM"){
        if(h==12){
            h=0 ; 
          cout<<setfill('0')<<setw(2)<<h<<c<<setfill('0')<<setw(2)<<m<<c<<setfill('0')<<setw(2)<<s ;
           
        }
        else{
             cout<<setfill('0')<<setw(2)<<h<<c<<setfill('0')<<setw(2)<<m<<c<<setfill('0')<<setw(2)<<s ;
        }
    }
    if(f=="PM"){
        if(h==12){
            h=12 ; 
          cout<<setfill('0')<<setw(2)<<h<<c<<setfill('0')<<setw(2)<<m<<c<<setfill('0')<<setw(2)<<s ;
        }
        
       else{ h=h+12 ;
          cout<<setfill('0')<<setw(2)<<h<<c<<setfill('0')<<setw(2)<<m<<c<<setfill('0')<<setw(2)<<s ;}
        
    }
}
