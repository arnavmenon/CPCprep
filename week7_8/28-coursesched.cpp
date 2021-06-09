#include <bits/stdc++.h>
#include <vector>
using namespace std;

enum color {WHITE, GRAY, BLACK};

void dfs(vector<vector<int>>&graph, int v, vector<int>& color, bool &cycle){

    if(color[v]==BLACK) 
        return;

    if(color[v]==GRAY)
    {
        cycle=true;
        return;
    }

    color[v]=GRAY;

    for(int i=0;i<graph[v].size();i++)
        dfs(graph, graph[v][i], color, cycle);
        

    color[v]=BLACK;
}

bool canFinish(int numCourses, vector<vector<int>>& pre) {

    vector<vector<int>>graph(numCourses);
    vector<int> color(numCourses,WHITE); 

    for(int i=0;i<pre.size();i++)
        graph[pre[i][1]].push_back(pre[i][0]);

    bool cycle=false;

    for(int i=0;i<numCourses;i++)
    {
        if(cycle)
            return false;

        if(!color[i])
            dfs(graph, i, color, cycle);
    }

    if(cycle)
        return false;

    return true;
}