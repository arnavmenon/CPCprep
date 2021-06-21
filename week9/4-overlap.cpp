#include <bits/stdc++.h>
#include <vector>
using namespace std;

//memo

vector<int> val(100, -1);

int fib(int x){

    if(val[x] == -1){
        if(x<=1) 
            val[x] = x;
        else 
            val[x] = fib(x-1) + fib(x-2);
    }

    return val[x];
}

//tabu

int fib(int x){
    
    vector<int> val(x+1);
    val[0]=0;
    val[1]=1;
    
    for(int i=2;i<=x;i++)
        val[i] = val[i-1] + val[i-2];

    return val[x];
}