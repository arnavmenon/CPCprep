#include <bits/stdc++.h>
#include <vector>
using namespace std;

int equilibriumPoint(long long a[], int n) {
    
    int sum=0,left=0;
    
    for(int i=0;i<n;i++)
        sum+=a[i];
        
    for (int i = 0; i < n; ++i)
    {
        sum -= a[i];
    
        if (left == sum)
            return i+1;     //position not index
    
        left+=a[i];
    }
    
    return -1;
}

//alt: calc cumulative sum from 0 to n-1 and n-1 to 0, if sum of the 2 for any
//index is zero then thats the equilibrium