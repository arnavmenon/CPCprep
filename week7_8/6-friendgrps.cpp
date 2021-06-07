#include <bits/stdc++.h>
#include <vector>
using namespace std;


void dfs(vector<vector<int>> adj, int u,vector<bool> &visited){

    visited[u] = true;

    for(auto v: adj[u]){
        if(!visited[v])
            dfs(adj, v, visited);
    }
}

int solve(vector<vector<int>>& friends) {

    int n=friends.size();
    vector<bool> visited(n, false);
    int ctr=0;
    
    for(int i=0;i<n;i++){

        if(visited[i]==false){
            dfs(friends, i, visited);
            ctr++;
        }        

    }
    
    return ctr;
}