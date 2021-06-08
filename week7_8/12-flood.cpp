#include <bits/stdc++.h>
#include <vector>
using namespace std;

void _flood(vector<vector<int>>& image, int sr, int sc, int newColor, int base, vector<vector<bool>>& visited) {

        int rl = image.size();
        int cl = image[0].size();
        
        if(sc < 0 || sc >= cl || sr < 0 || sr >= rl || image[sr][sc] != base || visited[sr][sc])
            return;

        
        visited[sr][sc] = true;
        image[sr][sc] = newColor;

        _flood(image, sr + 1, sc, newColor, base, visited);
        _flood(image, sr, sc + 1, newColor, base, visited);
        _flood(image, sr - 1, sc, newColor, base, visited);
        _flood(image, sr , sc - 1, newColor, base, visited);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int R=image.size();
        int C=image[0].size();
        
        if(R==0 || C==0)
            return image;
        
        vector<vector<bool>> visited(R, vector<bool>(C, false));
        
        if (image[sr][sc] != newColor)
            _flood(image, sr, sc, newColor, image[sr][sc], visited);
        return image;
    }