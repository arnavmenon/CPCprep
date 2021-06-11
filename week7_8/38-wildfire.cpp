#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve(vector<vector<int>>& matrix) {
          
    int R = matrix.size();
    if (R == 0) 
        return 0;

    int C = matrix[0].size();
    if (C == 0) 
        return 0;

    int count = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {

            if (matrix[i][j] == 1)
                count++;

            else if (matrix[i][j] == 2)
                q.push(make_pair(i, j));
        }
    }

    if (!count) 
        return 0;

    int ans = 0;
    pair<int, int> p;

    while (!q.empty()) {

        int n = q.size();
        for (int i = 0; i < n; i++) {

            p = q.front();
            q.pop();
            int x = p.first, y = p.second;

            if (x >= 1)
                if (matrix[x - 1][y] == 1) {
                    q.push(make_pair(x - 1, y));
                    matrix[x - 1][y] = 2;}

            if (x < R - 1)
                if (matrix[x + 1][y] == 1) {
                    q.push(make_pair(x + 1, y));
                    matrix[x + 1][y] = 2;}

            if (y >= 1)
                if (matrix[x][y - 1] == 1) {
                    q.push(make_pair(x, y - 1));
                    matrix[x][y - 1] = 2;}

            if (y < C - 1)
                if (matrix[x][y + 1] == 1) {
                    q.push(make_pair(x, y + 1));
                    matrix[x][y + 1] = 2;}
        }

        ans++;
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (matrix[i][j] == 1) 
                return -1;
        }
    }

    return ans - 1;

}