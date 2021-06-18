#include <bits/stdc++.h>
#include <vector>
using namespace std;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    
    int ans = 0;

    vector<int> dist(n+1, INT_MAX);
    dist[k] = 0;
    
    for (int i = 0; i < n; i++) {
        
        for (vector<int> k : times) {
            
            long int src = k[0]; 
            long int tgt = k[1];
            long int time = k[2];
            
            if (dist[tgt] > dist[src]+time && dist[src] != INT_MAX ) 
                dist[tgt] = dist[src] + time;
        }
    }

    for (int i = 1; i <= n; i++)
        ans = max(ans, dist[i]);

    if(ans==INT_MAX)
        return -1;
    return ans;
    
}