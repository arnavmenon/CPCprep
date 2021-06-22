#include <bits/stdc++.h>
#include <vector>
using namespace std;

int trib_(int n, vector<int>& val){
    
    if(val[n] != -1)
        return val[n];
    
    return val[n] = trib_(n-1, val) + trib_(n-2, val) + trib_(n-3, val);

}
    
int tribonacci(int n) {
    vector<int> val(38, -1);
    val[0]=0;
    val[1]=1;
    val[2]=1;

    return trib_(n, val);
}