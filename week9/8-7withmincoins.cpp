#include <bits/stdc++.h>
#include <vector>
using namespace std;

    
int coinChange(vector<int>& coins, int amount) {
    
    if(amount==0) return 0;
    int n=coins.size();
    
    vector<int> dp(amount+1, 10001);
    dp[0]=0;
    
    for(int i=1; i<=amount; i++){         
        for(int j=0; j<n; j++){
            
            if(coins[j] <= i)
                dp[i] = min(dp[i], 1 + dp[i-coins[j]]);
        }
    }
    
    if(dp[amount] == 10001) return -1;
    
    return dp[amount];
    
}