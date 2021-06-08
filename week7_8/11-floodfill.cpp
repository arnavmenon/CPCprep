#include <bits/stdc++.h>
#include <vector>
using namespace std;


void floodfill(int row, int col, int clr){

    if( visited[row][col] || row<0 || row>R || col<0 || col>C || grid[row][col] != clr )
        return;
        
    visited[row][col]=true;
    cout<<row<<","<<col;

    floodfill(row-1, col, clr);
    floodfill(row+1, col, clr);
    floodfill(row-1, col-1, clr);
    floodfill(row-1, col+1, clr);
    //4 more if ne nw se sw

}