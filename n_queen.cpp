class Solution {
public:
    vector<vector<string>> ans;
    bool valid(vector<string> &v,int n,int row,int col)
    {
        for(int i =0; i<row; i++){
            if(v[i][col]=='Q'){       // 90*
                return false;
            }
        }
        
        for(int i = row,j = col; i>=0 && j>=0; i--,j--){
            if(v[i][j]=='Q'){                       //45*
                return false;
            }
            
        }
        
         for(int i = row,j = col; i>=0 && j<n; i--,j++){
            if(v[i][j]=='Q'){                      //135*
                return false; 
            }  
            
        }
        return true;
    }
    void hlp(vector<string> &v,int r,int n)
    {
        if(r==v.size())
        {
            vector<string> chess = v;
            ans.push_back(chess);
            return;
        }
        for(int i=0;i<v.size();i++)
        {
            if(valid(v,v.size(),r,i))
            {
            v[r][i]='Q';
            hlp(v,r+1,n);
            v[r][i]='.';
            }
        }
        return;
    } 
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<string> b(n,s);
        hlp(b,0,n);
      return ans;  
    }
};
