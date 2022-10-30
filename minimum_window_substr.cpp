class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size())
            return "";
        unordered_map<char,int> mp;
        for(auto i:t)
            mp[i]++;
        int n=mp.size();
        int l=0,r=0;
        int cnt=0;
        int st=-1,sz=INT_MAX;
        while(r<s.size())
        {
            auto k=mp.find(s[r]);
            if(k!=mp.end())
            {
                if(--k->second==0)
                    cnt++;
            }
            if(cnt==n)
            {
            while(cnt==n&&l<=r)
            {
                auto j=mp.find(s[l]);
                if(j!=mp.end()&&++j->second>0)
                    cnt--;
                l++;
            }
               if(sz>r-l+2)
               {
                   st=l-1;
                   sz=r-l+2;
               }
            }
            r++;
        }
        return sz==INT_MAX?"":s.substr(st,sz);
    }
};
