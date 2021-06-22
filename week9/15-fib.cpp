#include <bits/stdc++.h>
#include <vector>
using namespace std;

int fib_(int n, vector<int>& val){
    
    if(val[n] != -1)
        return val[n];
    
    return val[n] = fib_(n-1, val) + fib_(n-2, val);

}

int fib(int n) {
    
    vector<int> val(31, -1);
    val[0]=0;
    val[1]=1;
    
    return fib_(n, val);
}