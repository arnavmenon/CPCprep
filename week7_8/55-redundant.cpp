#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
    int n=edges.size();
    vector<int>parent(n+1,0);  //numbered from 1

    
    vector<int>ans;
    
    for(auto e : edges){
        int u = e[0], v = e[1];
        
        while(parent[u]) 
            u = parent[u];
        while(parent[v]) 
            v = parent[v];
        
        if(u!=v) 
            parent[u] = v;
        else 
            ans=e;
    }
    
    return ans;
    
}