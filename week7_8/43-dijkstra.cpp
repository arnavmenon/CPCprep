#include <bits/stdc++.h>
#include <vector>
using namespace std;


int minDistance(<vector<int>& dist, <vector<bool>& sptSet, int n)
{
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < n; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
  
    return min_index;
}

vector<int> dijkstra(vector<vector<int>>& graph, int src)
{
    int n=graph.size();
    
    vector<int> dist(n); 
    vector<bool> sptSet(n); 

    for (int i = 0; i < n; i++){
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }
       
    dist[src] = 0;
  
    for (int count = 0; count < n - 1; count++) {
      
        int u = minDistance(dist, sptSet);     
        sptSet[u] = true;
      
        for (int v = 0; v < n; v++)
                
            if (!sptSet[v] && 
                graph[u][v] && 
                dist[u] != INT_MAX && 
                dist[u] + graph[u][v] < dist[v])

                dist[v] = dist[u] + graph[u][v];
    }
  
    
    return dist;
}