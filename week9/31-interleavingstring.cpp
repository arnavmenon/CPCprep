#include <bits/stdc++.h>
#include <vector>
using namespace std;


// try with 1d vector

bool isInterleave(string s1, string s2, string s3) {

    int n1=s1.length(), n2=s2.length();
    
    if(s3.length() != n1+n2)
        return false;
    
    bool dp[n1+1][n2+1];
    
    for(int i=0; i<=n1; i++)
        for(int j=0; j<=n2; j++){

            if(i==0 && j==0)
                dp[i][j] = true;

            else if(i == 0)
                dp[i][j] = ( dp[i][j-1] && s2[j-1] == s3[i+j-1]);

            else if(j == 0)
                dp[i][j] = ( dp[i-1][j] && s1[i-1] == s3[i+j-1]);

            else
                dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[i+j-1] ) || (dp[i][j-1] && s2[j-1] == s3[i+j-1] );
        }
        
    return dp[n1][n2];
}