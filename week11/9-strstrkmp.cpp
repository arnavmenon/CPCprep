#include <bits/stdc++.h>
#include <vector>
using namespace std;


void calcLPS(vector<int>& lps, int n, string nee){
    
    lps[0]=0;
    
    int len=0;
    int i=1;
    
    while(i<n){
        
        if(nee[i] == nee[len]){
            len++;
            lps[i]=len;
            i++;
        }
        
        else{
            
            if(len != 0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}


int KMP(string hay, string nee, int h, int n, vector<int>& lps){
    
    int i=0,j=0;
    
    while(i < h){
        
        if(hay[i] == nee[j]){
            i++;
            j++;
        }
        
        if(j==n){
            return i-j;
        }
        
        else if(i < h && hay[i] != nee[j]){
            
            if(j!=0)
                j=lps[j-1];
            else
                i++;
            
        }
    }
    
    return -1;
}

int strStr(string hay, string nee) {
    int h=hay.size();
    int n=nee.size();
    
    if(n==0) return 0;
    
    vector<int> lps(n);
    calcLPS(lps, n, nee);
    
    return KMP(hay, nee, h, n, lps);
}
