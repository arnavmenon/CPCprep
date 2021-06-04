#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {

    int beg = 0, end = arr.size() - k;

    while (beg < end) {

        int mid = (beg + end) / 2;

        if (x - arr[mid] > arr[mid + k] - x)
            beg = mid + 1;
        else
            end = mid;
    }

    return vector<int>(arr.begin() + beg, arr.begin() + beg + k);
}