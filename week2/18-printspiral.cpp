#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Recursively print squares of deacreasing sizes

void printSpiral(int arr[R][C], int i, int j, int m, int n)
{
    if (i >= m or j >= n)
        return;
 
    for (int p = j; p < n; p++)
        cout << arr[i][p] << " ";
 
    for (int p = i + 1; p < m; p++)
        cout << arr[p][n - 1] << " ";
 

    if ((m - 1) != i)
        for (int p = n - 2; p >= j; p--)
            cout << arr[m - 1][p] << " ";
 

    if ((n - 1) != j)
        for (int p = m - 2; p > i; p--)
            cout << arr[p][j] << " ";
 
    printSpiral(arr, i + 1, j + 1, m - 1, n - 1);
}