#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isMajorityElement(int arr[], int n, int key)
{
    if (arr[n/2] == key)
        return true;
    else
        return false;
}

// bsearch way


int BS(int arr[], int low, int high, int x)
{
    if (high >= low)
    {
        int mid = (low + high)/2;

        if ((mid == 0 || x > arr[mid - 1]) && (arr[mid] == x) )
            return mid;
             
        else if (x > arr[mid])
            return BS(arr, (mid + 1), high, x);
        
        else
            return BS(arr, low, (mid - 1), x);
    }
    return -1;
}

bool isMajority(int arr[], int n, int x)
{
     
    int i = BS(arr, 0, n - 1, x);
 
    if (i == -1)
        return false;
 
    if (((i + n / 2) <= (n - 1)) && arr[i + n / 2] == x)
        return true;
    else
        return false;
}
