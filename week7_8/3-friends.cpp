#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool solve(int n, vector<vector<int>>& friends) {
    
    vector<int> g[n];

    for(int i=0;i<n;i++){
        
        g[friends[i][0]].push_back(friends[i][1]);
        g[friends[i][1]].push_back(friends[i][0]);
    }

    for(int i=0;i<n;i++){
        if(g[i].size() == 0)
            return false;
    }

    return true;
}
