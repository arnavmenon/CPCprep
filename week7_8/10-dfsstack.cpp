#include <bits/stdc++.h>
#include <vector>
using namespace std;

void dfs(int u){

    vector<bool> visited(len, false);
    visited[u]=true;

    stack<int> S;
    S.push(u);

    while(!S.empty()){
        int x=S.top();
        S.pop();

        if(!visited[x]){
            cout<<x;
            visited[x]=true;
        }

        for (auto i = adj[x].begin(); i != adj[x].end(); i++)
            if (!visited[*i])
                S.push(*i);
    }

}