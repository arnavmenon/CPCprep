#include <bits/stdc++.h>
#include <vector>
using namespace std;


int _flood(vector<vector<int>>& image, int sr, int sc, vector<vector<bool>>& visited) {

    int rl = image.size();
    int cl = image[0].size();

    if(sc < 0 || sc >= cl || sr < 0 || sr >= rl || image[sr][sc]!=1)
        return 1;
    else if(visited[sr][sc])
        return 0;


    visited[sr][sc] = true;

    return (
            _flood(image, sr + 1, sc, visited)+
            _flood(image, sr, sc + 1, visited)+
            _flood(image, sr - 1, sc, visited)+
            _flood(image, sr , sc - 1, visited)
            );
}

int islandPerimeter(vector<vector<int>>& grid) {
    
    int R=grid.size();
    int C=grid[0].size();
    int cnt=0;

    if(R==0 || C==0)
        return 0;

    vector<vector<bool>> visited(R, vector<bool>(C, false));

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){

            if (grid[i][j] == 1 && !visited[i][j]){
                cnt+=_flood(grid, i, j, visited);
            }

        }
    }


    return cnt;
}