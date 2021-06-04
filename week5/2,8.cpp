#include <bits/stdc++.h>
#include <vector>
using namespace std;


vector<int> searchRange(vector<int>& nums, int target) {

    int a = BS(nums, target);
    int b = BS(nums, target + 1) - 1;

    if (a < nums.size() && nums[a] == target)
        return {a, b};
    else
        return {-1, -1};
}

int BS(vector<int>& nums, int target) {

    int beg=0,end = nums.size()-1;

    while (beg <= end) {

        int mid=(beg+end)/2;

        if (nums[mid] < target)
            beg= mid+1;
        else
            end= mid-1;
    }
    return beg;
}