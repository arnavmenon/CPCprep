#include <bits/stdc++.h>
#include <vector>
using namespace std;

int findSubarraySum(int arr[], int n, int sum)
{

    int curr_sum = arr[0];
    int start = 0;
 
    for (int i = 1; i <= n; i++) {

        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if (curr_sum == sum)
            return 1;
 
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
 
    return 0;
}