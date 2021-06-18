#include <bits/stdc++.h>
#include <vector>
using namespace std;



// times out

/* 
void dfs(vector<vector<int>> adj, int u, int &ctr, vector<bool> &visited){

    visited[u] = 1;
    ctr++;

    for(auto v: adj[u]){
        if(!visited[v])
            dfs(adj, v, ctr, visited);
    }
}

bool solve(int n, vector<vector<int>>& roads) {

    if(n==1) return true;
    int size=roads.size();
    if(!size) return false;
    int ctr=0;
    vector<bool> visited(n, false);

    vector<vector<int>> adj(n);

    for(int i=0;i<size;i++){
        adj[roads[i][0]].push_back(roads[i][1]);
    }

    for(int i=0;i<n;i++){
        
        ctr=0;
        visited.assign(n, false);

        dfs(adj, i, ctr, visited);

        if(ctr==n){
            ctr=0;
            continue;
        }

        else{
            return false;
        }
    }

    return true;
} */