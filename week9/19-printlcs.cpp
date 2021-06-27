#include <bits/stdc++.h>
#include <vector>
using namespace std;

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
    
    int len=dp[x][y];
    char str[len + 1];
    str[len]='\0';

    int i = m, j = n;

    while (i > 0 && j > 0)
    {
        
        if (s1[i-1] == s2[j-1]){
            
            str[len-1] = s1[i-1]; 
            i--; 
            j--; 
            len--;     
        }
        else if (s1[i-1][j] > s2[i][j-1])
            i--;
        else
            j--;
    }

    //print str
        
}
