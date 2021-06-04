#include <bits/stdc++.h>
#include <vector>
using namespace std;

int hIndex(vector<int>& citations) {
        
    int beg =0, end=citations.size()-1;
    int n=citations.size();
    int ans = 0;

    while(beg<=end){

        int mid=(beg+end)/2;

        if(citations[mid] >= n-mid){
            ans = n-mid;
            end = mid - 1;
        }

        else
            beg  = mid + 1;

    }

    return ans;
}