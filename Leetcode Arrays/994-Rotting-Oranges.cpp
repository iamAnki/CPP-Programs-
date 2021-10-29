// Link to Problem : https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        queue<pair<int,int>>q;
        int fresh = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(a[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        vector<vector<int>>dir = {{1,0},{-1,0},{0,1},{0,-1}};
        int ans = 0;
        while(!q.empty())
        {
            int size = q.size();
            //flag for increase ans only if first time loop for whole queue
            bool flag = true;
            for(int i=0;i<size;i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(auto d:dir)
                {
                    int newx = x + d[0];
                    int newy = y + d[1];
                    if(newx<0||newy<0||newx>=n||newy>=m||a[newx][newy]!=1)
                    {
                    }
                    else if(a[newx][newy]==1)
                    {
                        if(flag)
                        {
                            ans++;
                            flag = false;
                        }
                        a[newx][newy] = 2;
                        q.push({newx,newy});
                        fresh--;
                    }
                }
            }
        }
        return fresh?-1:ans;
    }
};
