#include <bits/stdc++.h>
#include <vector>
using namespace std;

int firstBadVersion(int n) {

    int beg = 0, end = n;
    while (beg<end) {

        int mid = (beg+end)/2;

        if (isBadVersion(mid)) 
            end=mid;
        else
            beg=mid+1;

    }

    return beg;
}