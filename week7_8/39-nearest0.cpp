#include <bits/stdc++.h>
#include <vector>
using namespace std;

    int NS[4]={-1,0,1,0};
    int EW[4]={0,1,0,-1};
    
    int maxDistance(vector<vector<int>>& grid) {
        
        int n=grid.size();
        if(!n)
            return -1;
        
        
        int ans = 0;
		queue<pair<int, int>> q;

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (grid[i][j] == 1) 
                    q.push({ i, j });
			}
		}

        pair<int, int> t;

		while (!q.empty()) {

			t = q.front();
			q.pop();

            for(int i=0; i<4; i++){

                int tx= t.first + NS[i];
                int ty= t.second + EW[i];

                if(tx>=0 && ty>=0 && tx<=n-1 && ty<=n-1 && grid[tx][ty] == 0){

                    q.push({tx,ty});
                    grid[tx][ty] = grid[t.first][t.second] + 1;
                    ans = max(grid[tx][ty], ans);
                }
            }

		}
		
        if(!ans)
            return -1;
        
        return ans-1;
        
    }