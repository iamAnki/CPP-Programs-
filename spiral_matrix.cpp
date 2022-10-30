class Solution {
public:
    bool chk(int ix,int iy,int m, int n)
    {
        if(ix<0||iy<0||ix==m||iy==n)
            return true;
        return false;
    }
    void cng(int &ix,int &iy)
    {
        swap(ix,iy);
        if(ix==0)
            iy*=-1;
        return;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int cnt=m*n;
        int x=0,y=0;
        int ix=0,iy=1;
        while(cnt--)
        {
          if(chk(x+ix,y+iy,m,n)||matrix[x+ix][y+iy]==-101)  
              cng(ix,iy);
            ans.push_back(matrix[x][y]);
            matrix[x][y]=-101;
            x+=ix;
            y+=iy;
        } 
        return ans;
    }
};
