#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isPerfectSquare(int x) {
    
    if (x==0||x==1)
        return true;

    int b= 1;
    int e = x/2;
    int ans;

    while (b<=e){  

        float mid = (b+e) / 2;
        float root=x/mid;

        if (mid==root)
            return true;

        else if (mid<root){
            b=mid+1;
            ans=mid;        // approx ans
        }

    else 
        e= mid-1; 

    }

    return false;
}