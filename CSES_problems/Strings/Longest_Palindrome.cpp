    #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>
    #define endl "\n"
    #define ll long long int
    #define vi vector<int>
    #define vll vector<ll>
    #define vvi vector < vi >
    #define pii pair<int,int>
    #define pll pair<long long, long long>
    #define mod 1000000007
    #define inf 1000000000000000001;
    #define all(c) c.begin(),c.end()
    #define mp(x,y) make_pair(x,y)
    #define mem(a,val) memset(a,val,sizeof(a))
    #define eb emplace_back
    #define f first
    #define s second
    
    using namespace std;

    string convert(string s) {
        string h="@";
        h+="#";

        for(int i=0;i<s.size();i++) {
            h+=s[i];
            h+="#";
        }

        h+="$";

        return h;
    }

    string re_convert(string h) {
        string f="";

        for(int i=0;i<h.size();i++) {
            if(h[i]!='#') {
                f+=h[i];
            }
        }

        return f;
    }


   string lps_using_manacher(string s) {

    string h=convert(s);

    int p[h.size()];

    memset(p,0,sizeof(p));

    int r=0;
    int c=0;

     int max_palin=0;
    int centre=0;

    for(int i=0;i<h.size();i++) {

        int mirror=2*c-i;

        if(r>i) {
            p[i]=min(r-i,p[mirror]);
        }

        while(h[i-1-p[i]]==h[i+1+p[i]]) {
            p[i]++;
        }

        if(p[i]>max_palin) {
            centre=i;
            max_palin=p[i];
        }

        if(i+p[i]>r) {
            r=i+p[i];
            c=i;
        }
    }

    

    cout<<max_palin;
     //  return "";

    return h.substr(centre-max_palin,2*max_palin);

   }



    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

      
      string s;

      cin>>s;

      string j=lps_using_manacher(s);

      for(int i=0;i<j.size();i++) {
        if(j[i]!='#') {
            cout<<j[i];
        }
      }

        return 0;
    }