#include <bits/stdc++.h>
#include <vector>
using namespace std;


int binarySearch(int arr[], int low, int high)
{
    while(low<=high){

        int mid = (low + high)/2;

        if(mid == arr[mid])
            return mid;

        else if(mid > arr[mid])
            return binarySearch(arr, (mid + 1), high);
        else
            return binarySearch(arr, low, (mid -1));
    }
 
    return -1;
}