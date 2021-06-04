#include <bits/stdc++.h>
#include <vector>
using namespace std;


int guessNumber(int n) {
        int beg = 1, end = n;
        int mid;

        while (beg <= end) {

            mid=beg + (end-beg)/2;
            int check=guess(mid);

            if (check==0) 
                return mid;

            else if (check==-1) 
                end = mid - 1;

            else 
                beg = mid + 1;
        }

        return -1;
    }