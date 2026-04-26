class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid){
        grid[i][j] = '0';

        if(j+1<grid[0].size() && grid[i][j+1] == '1'){
            dfs(i,j+1,grid);
        }
        if(i+1<grid.size() && grid[i+1][j] == '1'){
            dfs(i+1,j,grid);
        }
        if(j-1>=0 && grid[i][j-1] == '1'){
            dfs(i,j-1,grid);
        }
        if(i-1>=0 && grid[i-1][j] == '1'){
            dfs(i-1,j,grid);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == '1'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }

        return count;
    }
};
