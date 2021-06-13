#include <bits/stdc++.h>
#include <vector>
using namespace std;

pair<int, int> coordinates(int val, int n) 
{
    int r = n - (val-1)/n -1;
    int c = (val-1)%n;
    if(r%2==n%2)
        return {r,n-c-1};
    return {r, c};
}

int snakesAndLadders(vector<vector<int>>& board) {

    int n = board.size();
    if(!n)
        return -1;

    vector<vector<bool>> visited(n, vector<bool>(n)); 
    queue<int> q;
    int ans = 0;

    q.push(1);
    visited[n-1][0]=true;

    while(!q.empty()) 
    {
        int n1 = q.size();

        for(int i=0; i<n1; i++) 
        {
            int val = q.front();
            q.pop();

            if(val == n*n) 
                return ans;
            
            for(int j=1; j<=6; j++) 
            {
                if( j + val > n*n) 
                    break;

                pair<int, int> p = coordinates(val+j, n);

                if(visited[p.first][p.second]) 
                    continue;

                visited[p.first][p.second] = true;

                if(board[p.first][p.second]!=-1) 
                    q.push(board[p.first][p.second]);

                else
                    q.push(j+val);
            }
        }

        ans++;
    }
    
    return -1;
}