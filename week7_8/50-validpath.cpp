#include <bits/stdc++.h>
#include <vector>
using namespace std;


bool inside(int x,int y,vector<vector<int>> &grid)                
    {
        if(x<0||y<0||x>=grid.size()||y>=grid[0].size())
            return false;

        return true;
    }

    void dfs(int x,int y,vector<vector<bool>> &visited,vector<vector<int>> &grid)
    {
        if(visited[x][y])
            return;   

        visited[x][y]=true;
        int up,down,left,right;
        up=down=left=right=0;  

        if(grid[x][y]==1)
            left=right=1;
        else if(grid[x][y]==2)
            up=down=1;
        else if(grid[x][y]==3)
            left=down=1;
        else if(grid[x][y]==4)
            down=right=1;
        else if(grid[x][y]==5)
            left=up=1;
        else
            up=right=1;

        if(up)
        {
            int tx=x-1,ty=y;            
            if(inside(tx,ty,grid) && (grid[tx][ty]==2||grid[tx][ty]==3||grid[tx][ty]==4))  
                dfs(tx,ty,visited,grid);
        }
        if(down)
        {
            int tx=x+1,ty=y;
            if(inside(tx,ty,grid) && (grid[tx][ty]==2||grid[tx][ty]==5||grid[tx][ty]==6))
                dfs(tx,ty,visited,grid);
        }
        if(right)
        {
            int tx=x,ty=y+1;
            if(inside(tx,ty,grid) && (grid[tx][ty]==1||grid[tx][ty]==5||grid[tx][ty]==3))
                dfs(tx,ty,visited,grid);
        }
        if(left)
        {
            int tx=x,ty=y-1;
            if(inside(tx,ty,grid) && (grid[tx][ty]==1||grid[tx][ty]==4||grid[tx][ty]==6))
                dfs(tx,ty,visited,grid);
        }
    }
    
    bool hasValidPath(vector<vector<int>>& grid) {

        int n=grid.size();
        if(!n) return false;
        int m=grid[0].size();
        if(!m) return false;

        vector<vector<bool>> visited(n,vector<bool>(m,false));           
        dfs(0,0,visited,grid);                                           
        return visited[n-1][m-1];                                       
    }

