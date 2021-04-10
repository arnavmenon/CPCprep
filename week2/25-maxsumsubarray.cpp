#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Kadanes
int maxSubArraySum(int arr[], int n)
{
    int maxtill = INT_MIN, maxupto = 0;
 
    for (int i = 0; i < n; i++)
    {
        maxupto = maxupto + arr[i];

        if (maxtill < maxupto)
            maxtill = maxupto;
 
        if (maxupto < 0)
            maxupto = 0;
    }

    return maxtill;
}

// DP

int maxSubArraySum(int arr[], int n)
{
   int maxtill = arr[0];
   int max_curr = arr[0];
 
   for (int i=1;i<n; i++)
   {
        max_curr = (arr[i]>=max_curr+arr[i])?arr[i]:(max_curr+arr[i]);
        maxtill = (maxtill>=max_curr)?maxtill:max_curr;
   }
   
   return maxtill;
}