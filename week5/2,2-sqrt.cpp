#include <bits/stdc++.h>
#include <vector>
using namespace std;


int mySqrt(int x) {

    if (x==0||x==1)
        return x;
        
    int b= 1;
    int e = x/2;
    int ans;

    while (b<=e){  

        int mid = (b+e) / 2;
        int root=x/mid;

        if (mid==root)
            return mid;

        else if (mid<root){
            b=mid+1;
            ans=mid;        // approx ans
        }

    else 
        e= mid-1; 
               
    }

    return ans;
}