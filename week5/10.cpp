#include <bits/stdc++.h>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

    int beg = 0, end = arr.size()-1;

    while (beg <= end) {

        int mid=(beg+end)/2;

        if (arr[mid] < arr[mid+1])
            beg = mid+1;
        else
            end = mid-1;
    }

    return beg;
}