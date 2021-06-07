#include <bits/stdc++.h>
#include <vector>
using namespace std;

void dfs(int u){

    visited[u] = 1;
    cout<<u<<" ";

    for(auto v: adj[u]){
        if(!visited[v])
            dfs(v);
    }
}