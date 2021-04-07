#include <bits/stdc++.h>
#include <vector>
using namespace std;

//similar to 8 in this set

int matSearch (vector <vector <int>> &mat, int n, int m, int x)
{
    int small=mat[0][0],big=mat[n - 1][m - 1];
    
    if (x < small || x > big)
        return 0;
    
    int i=0,j=m-1;
    
    while (i<n && j>=0)
    {
        if (mat[i][j] == x)
            return 1;     
        else if (mat[i][j]<x)
            i++;
        else
            j--;
    }
    
    return 0;
}