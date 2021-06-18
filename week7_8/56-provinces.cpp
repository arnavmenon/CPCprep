#include <bits/stdc++.h>
#include <vector>
using namespace std;
    
int find(int i, vector<int>& p) {

    if(p[i] == i)
        return i;

    return p[i] = find(p[i],p);
}

void uni(int u, int v, vector<int>& p) {

    u = find(u,p);
    v = find(v,p);
    
    if(u != v)
        p[v] = u;
}

int findCircleNum(vector<vector<int>>& isConnected) {

    int n = isConnected.size();
    vector<int> p(n);

    for(int i=0;i<n;i++)
        p[i] = i;

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++) 
            if(isConnected[i][j] == 1)
                uni(i,j,p);
    
    int ans=0;
    
    for(int i=0;i<n;i++) 
        if(p[i] == i)
            ans++;
    
    return ans;
}