#include <bits/stdc++.h>
#include <vector>
using namespace std;


void _flood(vector<vector<char>>& board, int i, int j){
    
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!='O'){
        return ;
    }
    
    board[i][j]='M';
    
    _flood(board, i+1, j);
    _flood(board, i-1, j);
    _flood(board, i, j+1);
    _flood(board, i, j-1);
    
}


void solve(vector<vector<char>>& board) {
    
    int R=board.size();
    int C=board[0].size();
    
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++){
            if (i == 0 || j == 0 || i == R - 1 || j == C - 1)
                _flood(board,i,j);
        }
    
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++){
            if (board[i][j]=='M')
                board[i][j]='O';
            else
                board[i][j]='X';
        }
    
}