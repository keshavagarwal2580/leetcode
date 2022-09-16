class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        //first find the indec of the 
        queue<pair<int,int>>q;
        int te=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0) te++;
                if(grid[i][j]==2)
                {
                    grid[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int k=grid.size(),l=grid[0].size();
        int t=0;
        vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++){
                pair<int ,int> p=q.front();
                int curX=p.first;
                te++;
                int curY=p.second;
                q.pop();
                for(auto it: dir){
                    int newX=curX+it.first;
                    int newY=curY+it.second;
                    if(newX>=0 && newY>=0 && newX<k && newY<l && grid[newX][newY]==1 ){
                        q.push({newX,newY});
                        grid[newX][newY]=0;
                    }
                }   
            }
            t++;
        }
        
        if(k*l== te) return t==0?t:t-1;
        return -1;
    }
};