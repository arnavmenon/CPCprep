#include <bits/stdc++.h>
#include <vector>
using namespace std;


double myPow(double x, int n) {

    double ans = 1;
    int i=abs(n);

    while(i){

        if(i%2){

            if(n>0)
                ans = ans*x;
            else
                ans = ans/x; 
        }

        x = x*x;
        i = i/2;
    }

    return ans;
}