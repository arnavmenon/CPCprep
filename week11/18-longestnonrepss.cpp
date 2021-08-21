#include <bits/stdc++.h>
#include <vector>
using namespace std;

//n^2

    int longestUniqueSubsttr(string s){
        
        int ans=0;
        int n=s.size();
        
        
        for(int i=0; i<n; i++){
            
            map<char, bool> M;
            
            for(int j=i; j<n; j++){
                
                if(M[s[j]] == false){
                    ans= max(ans, j-i+1);
                    M[s[j]]=true;
                }
                
                else
                    break;
            }
            
            M[s[i]]=false;
        }
        
        return ans;
        
    }
};

//n

    
int longestUniqueSubsttr(string S){
    
    int ans=0;
    vector<int> M(256, -1);
    int n=S.size();
    int i=0;
    
    for(int j=0; j<n; j++){
        
        i=max(i, M[S[j]] + 1);
        
        ans=max(ans, j-i+1);
        
        M[S[j]] = j;
    }
    
    return ans;
    
    
}


