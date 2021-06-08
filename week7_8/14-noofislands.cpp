#include <bits/stdc++.h>
#include <vector>
using namespace std;


void _flood(vector<vector<char>>& image, int sr, int sc, vector<vector<bool>>& visited) {

    int rl = image.size();
    int cl = image[0].size();
    
    if(sc < 0 || sc >= cl || sr < 0 || sr >= rl || visited[sr][sc] || image[sr][sc]!='1')
        return;

    
    visited[sr][sc] = true;

    _flood(image, sr + 1, sc, visited);
    _flood(image, sr, sc + 1, visited);
    _flood(image, sr - 1, sc, visited);
    _flood(image, sr , sc - 1, visited);
}


int numIslands(vector<vector<char>>& grid) {
    
    int R=grid.size();
    int C=grid[0].size();
    int ctr=0;
    
    if(R==0 || C==0)
        return 0;
    
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            
            if (grid[i][j] == '1' && !visited[i][j]){
                _flood(grid, i, j, visited);
                ctr++;
            }
                
        }
    }
    
    
    return ctr;
    
}