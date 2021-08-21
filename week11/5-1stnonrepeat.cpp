#include <bits/stdc++.h>
#include <vector>
using namespace std;

char nonrepeatingCharacter(string S)
{
    map<char , int> M;
    for(int i=0;i<S.size(); i++){
            M[S[i]]++;
    }
    
    for(int i=0;i<S.size(); i++){
        if(M[S[i]] == 1)
            return S[i];
    }
    
    return '$';
    
}
