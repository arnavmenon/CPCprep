#include <bits/stdc++.h>
#include <vector>
using namespace std;

int safe(int arr[][], int m, int n)
{
    bool row_i = false;
    bool col_i = false;
    int h=INT_MAX, l=INT_MIN;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if(arr[i][j]>h)
                h=arr[i][j];
            else if(arr[i][j]<l)
                l=arr[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 && (arr[i][j] == l || arr[i][j] == h))
                row_i = true;
 
            if (j == 0 && (arr[i][j] == l || arr[i][j] == h))
                col_i = true;
 
            if (arr[i][j] == l || arr[i][j] == h) {
                arr[0][j] = l;
                arr[i][0] = l;
            }
        }
    }


    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[0][j] == l || arr[i][0] == l || arr[i][0] == h || arr[0][j] == h) {
                arr[i][j] = l;
            }
        }
    }
 
    if (row_i == true) {
        for (int i = 0; i < n; i++) {
            arr[0][i] = l;
        }
    }
    if (col_i == true) {
        for (int i = 0; i < m; i++) {
            arr[i][0] = l;
        }
    }

    int ctr=0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if(arr[i][j] != l && arr[i][j] != h)
                ctr++;
        }
    }

    return ctr;
    
}


