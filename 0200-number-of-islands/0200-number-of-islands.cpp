class Solution {
    private:
    void bfs(int row,int col, vector<vector<int>>&vis,vector<vector<char>>grid){
         int n= grid.size();
        int m= grid[0].size();
        
        vis[row][col] = 1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row = q.front().first;
            int col= q.front().second;
            q.pop();
          if( row>0 and row<n and grid[row-1][col]=='1' and !vis[row-1][col] ){
              vis[row-1][col]=1;
                        q.push({row-1,col});
          }
          if( col>=0 and col<m-1 and grid[row][col+1]=='1' and !vis[row][col+1] ){
              vis[row][col+1]=1;
                        q.push({row,col+1});
          }
          if( row>=0 and row<n-1 and grid[row+1][col]=='1' and !vis[row+1][col] ){
              vis[row+1][col]=1;
                        q.push({row+1,col});
          }
          if( col>0 and col<m and grid[row][col-1]=='1' and !vis[row][col-1] ){
              vis[row][col-1]=1;
                        q.push({row,col-1});
          }
            




            // for(int delrow=-1;delrow<=1;delrow++){
            //     for(int delcol=-1;delcol<=1;delcol++){
            //         int nrow = row+delrow;
            //         int ncol = col+delcol;
            //         if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and grid[nrow][ncol]=='1' and !vis[nrow][ncol]){
            //             vis[row][col]=1;
            //             q.push({nrow,ncol});
            //         }
            //     }
            // }     //end
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int m= grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] and grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
        
    }
};