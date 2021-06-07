#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int x, y, nodes, edges;
    vector<int> adj[1000];

    cin >> nodes;   
    cin >> edges;   
     
    for(int i = 0; i < edges; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int q;
    int qarr[1000][2];

    cin>>q;

    for(int i = 0; i < q; i++){

        cin>>x>>y;
        qarr[i][0]=x;
        qarr[i][1]=y;
    }

    for(int i = 0; i < q; i++){
		
		auto it=find(adj[qarr[i][0]].begin(), adj[qarr[i][0]].end(), qarr[i][1]);

        if( it != adj[qarr[i][0]].end() )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
