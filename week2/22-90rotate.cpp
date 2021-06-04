#include <bits/stdc++.h>
#include <vector>
using namespace std;


void rotate(int *arr, int R, int C) 
{ 
    int ans[C][R];
    
    for (int i = 0; i < R; i++) 
        for (int j = 0; j < C; j++) 

            ans[j][R-i-1] = arr[i][j]; 
        
} 