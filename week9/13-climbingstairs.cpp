#include <bits/stdc++.h>
#include <vector>
using namespace std;

    
int climbStairs(int n) {
    
    if(n==1) return 1;
    if(n==2) return 2;
    
    //int steps[] = {1,2};
    
    vector<int> val(n+1, 0);
    val[0]=0;
    val[1]=1;
    val[2]=2;
    
    for(int j=3; j<=n;j++)
        val[j] += val[j-1] + val[j-2];
        
    
    return val[n];
    
}