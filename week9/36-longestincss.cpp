#include <bits/stdc++.h>
#include <vector>
using namespace std;

int longestSubsequence(int n, int arr[])
{
    int dp[n];
    dp[0] = 1;
    
    for (int i = 1; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
    }
    
    
    return *max_element(dp, dp + n);
}

