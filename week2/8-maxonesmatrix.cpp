#include <bits/stdc++.h>
#include <vector>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {  //step like traversing
    int row = 0, i, j;      
    
    for (i=0, j=m-1; i<n;i++)
    {

        while (arr[i][j] == 1 && j >= 0) 
        {
            row = i;
            j--;
        }
    }
    
    if(row==0 && j==m-1)
        return -1;
    else
        return row;
}