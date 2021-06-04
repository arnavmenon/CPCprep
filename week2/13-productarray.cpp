#include <bits/stdc++.h>
#include <vector>
using namespace std;

void productArray(int arr[], int n)
{
    int i,temp = 1;
 
    int prod[n]
    for (i = 0; i < n; i++) {
        prod[i] = 1;
    }
 
    for (i = 0; i < n; i++) {
        prod[i] = temp;
        temp *= arr[i];
    }

    temp=1;
 
    for (i = n - 1; i >= 0; i--) {
        prod[i] *= temp;
        temp *= arr[i];
    }
 
    for (i = 0; i < n; i++)
        cout << prod[i] << " ";
 
    return;
}