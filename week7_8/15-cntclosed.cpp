#include <bits/stdc++.h>
#include <vector>
using namespace std;

//not connected to edge means closed
// here we are modifying the key to 1 everytime instead of using visited matrix

void _flood(vector<vector<int>>& image, int sr, int sc) {

    int rl = image.size();
    int cl = image[0].size();

    if(sc < 0 || sc >= cl || sr < 0 || sr >= rl || image[sr][sc]==1)
        return;


    image[sr][sc]=1;

    _flood(image, sr + 1, sc);
    _flood(image, sr, sc + 1);
    _flood(image, sr - 1, sc);
    _flood(image, sr , sc - 1);
}

int closedIsland(vector<vector<int>>& grid) {
    
    int R=grid.size();
    int C=grid[0].size();
    int ctr=0;

    if(R==0 || C==0)
        return 0;

    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            if (i == 0 || j == 0 || i == R - 1 || j == C - 1)
                _flood(grid,i,j);
                
            
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            if(grid[i][j]==0){
                _flood(grid, i, j);
                ctr++;
            }
    

return ctr;
}
