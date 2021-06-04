#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxAscendingSum(vector<int>& nums) {

    int cumul=0,n=nums.size();
    int sum=nums[0];

    for (int i=1; i<n; i++) {

        if (nums[i] <= nums[i - 1]) {
            
            cumul=(cumul>=sum)?cumul:sum;
            sum=0;
        }

        sum += nums[i];
    }
    return (cumul>=sum)?cumul:sum;
}