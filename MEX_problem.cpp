#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
  void nou( int *a, int init,int n, int *ans)
  {
       int b[100000]={0},pre=0;
       for(int i=init;i<n;i++)
	        {
	            b[a[i]]++;
	            if(a[i]!=pre)
	            ans[i]=pre;
	            else
	            {
	                pre++;
	                while(b[pre]!=0)
	                {
	                    pre++;
	                }
	                ans[i]=pre;

	            }

	        }
  }

int main() {
	int test_case;
	cin>>test_case;
	while(test_case--)
	{
	    int N;
	    long int K;
	    cin>>N>>K;
	    int abs[100000]={0};
	    for(int kl=0;kl<N;kl++)
	        cin>>abs[kl];
	        int map=abs[0];
	        for(int i=1;i<N;i++)
	        {
	            if(abs[i]>map)
	            map=abs[i];
	        }
	        map+=2;

	      vector<int>MEX[10000];
	      for(int ty=0;ty<N;ty++)
	      {

	          MEX[abs[ty]].push_back(ty);
	      }

              int value[10000]={0};
	        long int p_ans[10000]={0};

	         nou(abs,0,N,value);
	         long int bada=value[N-1];

	         for(int i=0;i<N;i++)
	             p_ans[value[i]]+=(i+1);



	        for(int i=0;i<map;i++)
	        {

	            int num=MEX[i].size();
	            if(num==0)
	            break;
	            for(int j=0;j<num/2;j++)
	            {
	                MEX[i][j]=MEX[i][j]+MEX[i][num-1-j];
	                MEX[i][num-1-j]=MEX[i][j]-MEX[i][num-1-j];
	                MEX[i][j]=MEX[i][j]-MEX[i][num-1-j];
	            }
	        }

	            long int next_time;

	       for(int i=0;i<N-1;i++)
	       {
	           if(abs[i]<=bada)
	           {
	       //        cout<<"enter"<<endl;
	               MEX[abs[i]].pop_back();
	               if(MEX[abs[i]].size()==0) {

	               bada=abs[i];
	               next_time=N;
	             //     cout<<max<<endl;
	               }
	               else
	                   next_time=MEX[abs[i]][MEX[abs[i]].size()-1];
	              long   int no=0,start=-1,add=0;
	             for(int j=0;j<abs[i];j++)
	             {
	                 if(MEX[j].size()==0||MEX[j][MEX[j].size()-1]>next_time) {
	                 no=1;
	                 break;
	                 }
	                 else
	                 {
	                     if(start<MEX[j][MEX[j].size()-1]){
	                     start=MEX[j][MEX[j].size()-1];
	                  //   cout<<start<<" KK"<<endl;
	                     }
	                 }
	             }
	              if(no==0)
	              {
	                  if(start==-1) {
	                  add=0;
	                  start=i+1;
	                                }
	              else
	              add=abs[i];

	            //  cout<<add<<" "<<start<<"ppe"<<endl;
	                  for(int j=start;j<next_time;j++)
	                  {
	                      p_ans[value[j]]-=(j-i);
	                      value[j]=add;
	                       p_ans[value[j]]+=(j-i);
	                     // cout<<ans[val[j]]<<"op"<<endl;
	                  }


	              }
	           }


	       }

	        long int ans_f=0;
	        for(int i=0;i<map;i++)
	        {
	            if(K<=p_ans[i])
	            {
	                ans_f=i;
	                break;
	            }
	            else
	            K-=p_ans[i];
	        }


	        cout<<ans_f<<endl;

	}
	return 0;
}
