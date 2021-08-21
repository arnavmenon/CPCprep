#include <bits/stdc++.h>
#include <vector>
using namespace std;

//try again with their method

string reverseWords(string S) 
{ 
    int n=0;
    
    vector<string> a(2000, "");
    
    for(int i=0;i<S.size();i++){
        
        if(S[i] == '.'){
            n++;
            continue;
        }
        else{
            a[n].push_back(S[i]);
        }
    }
    
    string ans="";
    for(int i=n;i>=0;i--){
        ans.append(a[i]);
        if(i != 0)
            ans.push_back('.');
    }
    
    return ans;
    
} 