#include <bits/stdc++.h>
#include <vector>
using namespace std;


int visited[1000];
    
void dfs(vector<vector<int>> adj, int u, int &ctr){

    visited[u] = 1;
    ctr++;

    for(auto v: adj[u]){
        if(!visited[v])
            dfs(adj, v, ctr);
    }
}

bool canVisitAllRooms(vector<vector<int>>& rooms) {
    
    int n=rooms.size();
    int ctr=0;
            
    dfs(rooms, 0, ctr);
    
    if(ctr == n)
        return true;
    else
        return false;
    
    
}