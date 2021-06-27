#include <bits/stdc++.h>
#include <vector>
using namespace std;

//recur

int lcs(int x, int y, string s1, string s2)
{
    if(x==0 || y==0)
        return 0;
        
    if(s1[x-1] == s2[y-1])
        return (1+ lcs(x-1, y-1, s1, s2));
        
    return max(lcs(x-1, y, s1, s2), lcs(x, y-1, s1, s2));
}

//dp
int lcs(int x, int y, string s1, string s2)
{
    if(x==0 || y==0)
        return 0;
        
    int dp[x+1][y+1];
    
    for(int i=0; i<=x; i++){
        for(int j=0;j<=y;j++){
            
            if(i==0 || j==0)
                dp[i][j]=0;
            else if (s1[i-1] == s2[j-1]) 
                dp[i][j] = 1 + dp[i-1][j-1];
        
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
                
                
        }
    }
    
    return dp[x][y];
        
}
