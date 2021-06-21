#include <bits/stdc++.h>
#include <vector>
using namespace std;

//with recursion

bool issubsetsum(int set[], int n, int sum){

    if(sum == 0)
        return true;
    if (n <= 0 || sum < 0)
        return false;

    if (set[n-1] > sum)
        return isSubsetSum(set, n-1, sum);

    return issubsetsum(set, n-1, sum) || issubsetsum(set, n-1, sum - set[n-1]); //set[n-1] cause zero indexing, we're pucking one by one from left


}

// dp

vector<vector<int>> dp(100, vector<int>(100,-1)); //resize  if needed;

int issubsetsum(int set[], int n, int sum){     //int cause bool means no way to initialze differently

    if (sum == 0)
        return 1;   
    if (n <= 0 || sum < 0)
        return 0;

    if(dp[n-1][sum] != -1)      // !!!! should be dp[n][sum] everywhere? check one
        return dp[n-1][sum]

    if (set[n-1] > sum)
        return dp[n-1][sum]=isSubsetSum(set, n-1, sum);

    else
        return dp[n-1][sum] = issubsetsum(set, n-1, sum) || issubsetsum(set, n-1, sum - set[n-1]); 

}


