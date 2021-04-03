#include <bits/stdc++.h>
#include <vector>
using namespace std;


int threeSumClosest(vector<int> &num, int target) { //same as 3

    sort(num.begin(), num.end());

    int bestSum = 1000000000, sum = 0;

    for (int i = 0; i < num.size() - 2; i++) {

        int l = i + 1, r = num.size() - 1;
        while (l < r) {

            sum = num[i] + num[l] + num[r];

            if (abs(target - sum) < abs(target - bestSum)) 
                bestSum = sum;
            
            if (sum > target) 
                r--;
            else 
                l++;
        }
    }

    return bestSum;
}