#include <bits/stdc++.h>
#include <vector>
using namespace std;

int NS[8]={-1,0,1,0, 1, 1, -1, -1};
int EW[8]={0,1,0,-1, 1, -1, 1, -1};

int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    
    int n = grid.size();
    if (n == 0) 
        return 0;
    
    if (grid[0][0] != 0 || grid[n-1][n-1] != 0) 
        return -1;

    queue<pair<int, int>> q;
    pair<int, int> t;
    
    q.push({0,0});
    grid[0][0]=1;
    
    while(!q.empty()){
        
        t=q.front();
        
        int x=t.first, y=t.second;
        
        if(x==n-1 && y==n-1)
            return grid[x][y];
        
        for(int i=0; i<8; i++){

            int tx= x + NS[i];
            int ty= y + EW[i];

            if(tx>=0 && ty>=0 && tx<=n-1 && ty<=n-1 && grid[tx][ty] == 0){

                q.push({tx,ty});
                grid[tx][ty] = grid[x][y] + 1;
            }
        }
        
        q.pop();
        
    }
    
    return -1;
    

}