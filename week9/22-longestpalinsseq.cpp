#include <bits/stdc++.h>
#include <vector>
using namespace std;

//some issue with first palin check

string longestPalin (string str) {
    
    int n=str.size();
    
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int len=1, start=-1;
    
    for(int i=0; i<n; i++)
        dp[i][i]=true;
        
    for (int i=0; i<n-1; i++) {
        if (str[i] == str[i + 1]) {
            
            dp[i][i + 1] = true;
            len=2;
            start=i;
        }
    }
    

    for (int k=3; k<=n; k++){
        for (int i=0; i<n-k+1; i++){
            
            int j = i+k-1;

            if (str[i] == str[j] && dp[i + 1][j - 1]){
                
                dp[i][j] = true;
    
                if (k > len) {
                    len=k;
                    start=i;
                }
            }
        }
    }
    
    string ans;
    ans.assign(str, start, len);
    return ans;
    
}