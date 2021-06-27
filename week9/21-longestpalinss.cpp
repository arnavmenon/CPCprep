#include <bits/stdc++.h>
#include <vector>
using namespace std;

int longestpalinss(char *str)
{
    int n = strlen(str);

    int i, j, k;
    int dp[n][n];  

    for (i = 0; i<n; i++)
        dp[i][i] = 1;

    for (k=2; k<=n; k++)
    {
        for (i=0; i<n-k+1; i++)
        {
            j = i+k-1;

            if (str[i] == str[j] && k == 2)
                dp[i][j] = 2;

            else if (str[i] == str[j])
                dp[i][j] = 2 + dp[i+1][j-1];

            else
                dp[i][j] = max(dp[i][j-1] , dp[i+1][j]);
        }
    }

    return dp[0][n-1];
}