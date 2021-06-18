#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> r;
int find(int i, vector<int>& p) {

    if(p[i] == i)
        return i;

    return p[i] = find(p[i],p);
}

void uni(int u, int v, vector<int>& p) {

    u = find(u,p);
    v = find(v,p);
    
    if(u != v){

        if (r[u] < r[v])
            swap(u, v);

        p[v] = u;
        
        if (r[u] == r[v])
            r[u]++;
    }
}

vector<vector<int>> solve(vector<vector<int>>& graph) {

    int n=graph.size();
    vector<int> p(n);
    r.assign(n,0);

    for(int i=0;i<n;i++)
        p[i] = i;

    for(int i=0;i<n;i++){
        for(int j=0;j<graph[i].size();j++){
           //if(graph[i][j] > i) 
                uni(i,graph[i][j],p);
        }
    }
    
    vector<vector<int>> ans(n,vector<int>(n,0));
            
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++) 
            if(p[i] == p[j]){
                ans[i][j]=1;
                ans[j][i]=1;
            }
    
    return ans;

    
}