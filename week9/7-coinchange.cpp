#include <bits/stdc++.h>
#include <vector>
using namespace std;


long long int count( int S[], int m, int n )
{
    
    vector<long long int> val(n+1,0);
    val[0]=1;

    for(int i=0; i<m; i++){
        
        for(int j=0;j<=n;j++){
            if(S[i] <= j)
                val[j] += val[j-S[i]];
        }
    }
    
    return val[n];
}