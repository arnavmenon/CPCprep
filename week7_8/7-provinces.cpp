#include <bits/stdc++.h>
#include <vector>
using namespace std;


void dfs(vector<vector<int>> adj, int u,vector<bool> &visited){

    visited[u] = true;

    for (int v = 0; v < visited.size(); v++) {
        if (u !=v && adj[u][v]==1 && !visited[v]) {
            dfs(adj, v, visited);
        }
    }

}


int findCircleNum(vector<vector<int>>& isConnected) {
    
    int n=isConnected.size();
    vector<bool> visited(n, false);
    int ctr=0;

    for(int i=0;i<n;i++){

        if(visited[i]==false){
            dfs(isConnected, i, visited);
            ctr++;
        }        

    }

    return ctr;
    
}