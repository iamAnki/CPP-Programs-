class Solution {
public:
    bool r[9][9],b[9][9],c[9][9];
    bool hlp(vector<vector<char>>& board,int i,int j)
    {
        if(i==9)
        return true;
        if(j==9)
        return hlp(board,i+1,0);
        if(board[i][j]!='.')
        return hlp(board,i,j+1);
        int x=i/3,y=j/3;
        for(int it=1;it<10;it++)
        {
            if(!(r[i][it-1]||c[j][it-1]||b[x*3+y][it-1]))
            {
                board[i][j]=char('0'+it);
                bool rb=r[i][it-1],cb=c[j][it-1],bb=b[x*3+y][it-1];
                r[i][it-1]=true;
                c[j][it-1]=true;
                b[x*3+y][it-1]=true;
                if(hlp(board,i,j+1))
                    return true;
                r[i][it-1]=rb;
                c[j][it-1]=cb;
                b[x*3+y][it-1]=bb;
                board[i][j]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    r[i][board[i][j]-'1']=true;
                    c[j][board[i][j]-'1']=true;
                    int x=i/3,y=j/3;
                    b[x*3+y][board[i][j]-'1']=true;
                }
            }
        hlp(board,0,0);
        return;
    }
};
