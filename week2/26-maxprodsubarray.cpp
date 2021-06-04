#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxSubarrayProduct(int arr[], int n)
{

    int max_upto = 1;
    int min_till = 1;
    int max_till = 0;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            max_upto = max_upto * arr[i];
            min_till = min(min_till * arr[i], 1);
            flag = 1;
        }

        else if (arr[i] == 0) {
            max_upto = 1;
            min_ending_here = 1;
        }
        
 
        // handle negative elems
        else {
            int temp = max_upto;
            max_upto
                = max(min_till * arr[i], 1);
            min_till = temp * arr[i];
        }
 
        if (max_till < max_upto)
            max_till = max_upto;
    }

    if (flag == 0 && max_till == 0)
        return 0;

    return max_till;
}