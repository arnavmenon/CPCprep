#include <bits/stdc++.h>
#include <vector>
using namespace std;


bool subArrayExists(int arr[], int n)
{
    unordered_set<int> prefixSum;
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == 0 || prefixSum.find(sum)!= prefixSum.end())
            return true;
    
        prefixSum.insert(sum);
    }
    
    return false;
}