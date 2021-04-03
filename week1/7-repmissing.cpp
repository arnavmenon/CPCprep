#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> repmissing(int arr[], int n)
{
	int n = A.size();
    
    int s1 = 0, x=0, y=0;
    
    for(int i=1;i<=n; i++){
        s1 ^= i;
    }
    for(int i=0;i<n; i++){
        s1^=A[i];
    }
    
    int rightmost1 = s1 & ~(s1-1);
    
    for(int i=1; i<=n; i++){
        
        if(A[i-1]&rightmost1)
            x^=A[i-1];
        else 
            y^=A[i-1];
            
        if(i&rightmost1) 
            x^=i;
        else 
            y^=i;
    }
    
    for(int i=0;i<n; i++){
        if (A[i]==x)
            return {x,y};
    }
    return {y,x};
		
}

