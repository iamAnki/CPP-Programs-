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
    int main()
    {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        string s;

        cin>>s;

        map<char,int> mp;

        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
        }

        int ok=0;

        char c;

        for(auto x:mp) {
            if(x.s%2!=0) {
                ok++;
                c=x.f;
            }
        }

        if(ok>1) {
            cout<<"NO SOLUTION";
            return 0;
        }


        string s1="";
        string s2="";

        for(auto x:mp) {
            if(x.f!=c) {
                int q=x.s;

                while(q>0) {
                    if(q>0) {
                        s1+=x.f;
                        q--;
                    }
                    if(q>0) {
                        s2+=x.f;
                        q--;
                    }
                }
            }
        }

        int y=mp[c];

        while(y--) {
            s1+=c;
        }

       reverse(s2.begin(),s2.end());
        
        cout<<s1+s2;
        
        return 0;
    }