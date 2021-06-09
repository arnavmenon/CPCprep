#include <bits/stdc++.h>
#include <vector>
using namespace std;

enum color {WHITE, GRAY, BLACK};

bool dfs(vector<vector<int>> & graph, int i, vector<int> & color)
{
    if(color[i])
        return (color[i] == BLACK);
    
    color[i] = GRAY;
    
    for(auto v : graph[i])
    {
        if(color[v] == GRAY)
            return false;
        
        if(color[v] == WHITE && !dfs(graph, v, color))
            return false;
    }
    
    color[i] = BLACK;
    
    return true;
}

vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    
    int n=graph.size();
    vector<int> color(n, WHITE);
    vector<int> ans;
    
    for(int i=0; i < n;i++){
        if( dfs(graph, i, color))
            ans.push_back(i);
    }
    
    return ans;
}