#include <bits/stdc++.h>
#include <vector>
using namespace std;

//2ptr method

int closestToZero(int arr[], int n)
{
    // your code here
    int sum, bestSum = INT_MAX;   
    int l = 0, r = n-1;
 
    sort(arr, arr+n);
        
    while(l < r)
    {
        sum = arr[l] + arr[r];

        if((abs(sum) < abs(bestSum)) || (abs(sum)==abs(bestSum) && sum>0))  
            bestSum = sum;    
        if(sum < 0)
            l++;
        else
            r--;
    }
    
    return bestSum;
}