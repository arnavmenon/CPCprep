#include <bits/stdc++.h>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {

    int beg = 0, end = nums.size() - 1;
    int mid;

    while (beg <= end) {

        mid=(beg + end)/2;

        if (target==nums[mid]) 
            return mid;

        else if (target<nums[mid]) 
            end = mid - 1;

        else 
            beg = mid + 1;
    }

    return -1;
}
