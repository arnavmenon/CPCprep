#include <bits/stdc++.h>
#include <vector>
using namespace std;

int knapSack(int N, int W, int val[], int wt[])
{
    int dp[W+1];
    for(int i=0; i<=W; i++)
        dp[i]=0;

    
    for (int i=0; i<=W; i++)
        for (int j=0; j<N; j++)
            if (wt[j] <= i)
                dp[i] = max( dp[i] , val[j] + dp[i-wt[j]] );
    
    return dp[W];
}